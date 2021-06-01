#include "list.h"

void List::add(Agency *ag){
    pAgency.push_back(ag);
}

void List::print() {

    for (int i = 0; i < pAgency.size(); i++){
        cout << pAgency[i]->get_info();
    }

    cout << "\n";
}

Agency& List::get_ag(int index) const {
    return *this->pAgency[index];
}

void List::remove(int index) {
    pAgency.erase(pAgency.end() - (index + 1));
}

void List::clean() {
    for (int i = 0; i < pAgency.size(); i++){
        pAgency.erase(pAgency.end() - (i+1));
    }
}

void List::change_values(int index) {
    char name[50];
    char city[50];
    int age;
    struct boss the_boss;

    cout << "\nEnter new boss first name:";
    cin >> the_boss.first_name;
    cout << "\nEnter new boss second name:";
    cin >> the_boss.second_name;
    cout << "\nEnter new email:";
    cin >> the_boss.email;
    cout << "\nEnter new name:";
    cin >> name;
    cout << "\nEnter new city:";
    cin >> city;
    cout << "\nEnter new age:";
    cin >> age;

    pAgency[index]->set_boss(the_boss.first_name, the_boss.second_name, the_boss.email);
    pAgency[index]->set_name(name);
    pAgency[index]->set_city(city);
    pAgency[index]->set_age(age);
}
