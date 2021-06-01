#include "list.h"

void List::add(Agency *ag){
    this->pAgency[index++] = ag;
}

int List::get_cap() {
    return cap;
}

Agency& List::get_ag(int index) const {

    if (index < 0 || index >= this->num_of_elem){
        cout << "Out of range!";
        exit(1);
    }

    return *this->pAgency[index];
}

void List::print() {
    for (int i = 0; i < cap; i++){
        if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
            cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
        }
        else cout << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
    }
    cout << "\n";
}

void List::kharkov_agencies() {
    for (int i = 0; i < cap; i++){
        if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
            if (dynamic_cast<Mar_agency*>(pAgency[i])->get_city() == "kharkov"){
                cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
            }
        }
        else {
            if (dynamic_cast<Law_agency*>(pAgency[i])->get_city() == "kharkov"){
                cout << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
            }
        }
    }
    cout << "\n";
}

int List::most_wins_law() {
    int index = 0;
    for (int i = 1; i < cap; i++){
        if (dynamic_cast<Law_agency*>(pAgency[i]) != nullptr){
            if (dynamic_cast<Law_agency*>(pAgency[i])->get_won_cases() > dynamic_cast<Law_agency*>(pAgency[0])->get_won_cases()){
                index = i;
            }
        }
        else {
        }
    }
    
    return index;
}

void List::defence_in_court() {
    for (int i = 0; i < cap; i++){
        if (dynamic_cast<Law_agency*>(pAgency[i]) != nullptr){
            if (dynamic_cast<Law_agency*>(pAgency[i])->get_service() == "defence"){
                cout << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
            }
        }
        else {
        }
    }
    cout << "\n";
}

void List::no_weekends_mar_agencies() {
    for (int i = 0; i < cap; i++){
        if (dynamic_cast<Mar_agency*>(pAgency[i]) != nullptr){
            if (dynamic_cast<Mar_agency *>(pAgency[i])->get_weekends()){
                cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
            }
        }
        else {
        }
    }
    cout << "\n";
}
