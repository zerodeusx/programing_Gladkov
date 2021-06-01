#include "list.h"
#include "controller.h"

void Controller::add(Agency *ag){
    pAgency.push_back(ag);
}

void Controller::print() {

    for (int i = 0; i < pAgency.size(); i++){
        if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
            cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
        }
        else cout << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
    }

    cout << "\n";
}

void Controller::sort() {
    int choice;
    cout << "\nEnter [1] fom sorting upwards\nEnter [2] for sorting downwards\nYour choice: ";
    cin >> choice;

    if (choice == 1){
        Functor1 my_f;
        for (int i = 0; i < pAgency.size(); i++){
            for (int j = 0; j < pAgency.size() - 1; j++){
                if (my_f(pAgency[j]->get_age(), pAgency[j+1]->get_age())){
                    swap(pAgency[j], pAgency[i+1]);
                }
            }
        }
    }
    else if(choice == 2){
        Functor2 my_f;
        for (int i = 0; i < pAgency.size(); i++){
            for (int j = 0; j < pAgency.size() - 1; j++){
                if (my_f(pAgency[j]->get_age(), pAgency[j+1]->get_age())){
                    swap(pAgency[j], pAgency[i+1]);
                }
            }
        }
    }
}

void Controller::read_from_file() {

}

void Controller::write_to_file(){

    string file_name = "/home/blank/rgz_result.txt";

    ofstream MyWriteFile(file_name);

    for (int i = 0; i < pAgency.size(); i++){
        if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
            MyWriteFile << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
        }
        else MyWriteFile << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
    }

    MyWriteFile.close();
}

void Controller::search() {
    int choice;
    cout << "\nYou can find your agencies by this criteria:\n";
    cout << "\n[1] - Boss first name, boss second name, boss email"
            "\n[2] - agency name"
            "\n[3] - agency age"
            "\n>>> Your choice: ";
    cin >> choice;
    if (choice < 0 || choice > 3){
        cout << "\nWrong input!";
        exit(1);
    }

    if (choice == 1){
        char f_name[50];
        char s_name[50];
        char email[50];

        cout << "\nEnter boss first name:";
        cin >> f_name;
        cout << "\nEnter boss second name:";
        cin >> s_name;
        cout << "\nEnter boss email:";
        cin >> email;


        for (int i = 0; i < pAgency.size(); i++){
            if (strcmp(pAgency[i]->get_f_name().c_str(), f_name) == 0 &&
                    strcmp(pAgency[i]->get_s_name().c_str(), s_name) == 0 &&
                    strcmp(pAgency[i]->get_email().c_str(), email) == 0 ){
                if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
                    cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
                }
                else cout << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
            }
        }
    }
    else if (choice == 2){
        char ag_name[50];
        cout << "\nEnter agency name:";
        cin >> ag_name;
        for (int i = 0; i < pAgency.size(); i++){
            if (strcmp(pAgency[i]->get_ag_name().c_str(), ag_name) == 0){
                if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
                    cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
                }
                else cout << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
            }
        }
    }
    else if (choice == 3){
        int age;
        cout << "\nEnter agency age:";
        cin >> age;

        for (int i = 0; i < pAgency.size(); i++){
            if (age == pAgency[i]->get_age()){
                if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
                    cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
                }
                else cout << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
            }
        }
    }
}

void Controller::kharkov_aged() {
    for (int i = 0; i < pAgency.size(); i++){
        if (strcmp(pAgency[i]->get_city().c_str(), "kharkov") == 0 && pAgency[i]->get_age() > 3){
            if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
                cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
            }
            else cout << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
        }
    }
}

int Controller::law_with_most_wons() {
    int index = 0;
    for (int i = 1; i < pAgency.size(); i++){
        if (dynamic_cast<Law_agency*>(pAgency[i]) != nullptr){
            if (dynamic_cast<Law_agency*>(pAgency[i])->get_wins() > dynamic_cast<Law_agency*>(pAgency[0])->get_wins()){
                index = i;
            }
        }
        else {
        }
    }

    return index;
}

void Controller::mar_without_weekends() {
    for (int i = 0; i < pAgency.size(); i++){

        if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
            if (!dynamic_cast<Mar_agency *>(pAgency[i])->get_weekends()){
                cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
            }
        }
    }
}
