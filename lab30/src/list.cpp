#include "list.h"

void List::add(Agency *ag){
    pAgency.push_back(ag);
}

void List::print() {

    for (int i = 0; i < pAgency.size(); i++){
        if (dynamic_cast<Law_agency*>(pAgency[i]) == nullptr){
            cout << "\n" << dynamic_cast<Mar_agency*>(pAgency[i])->print_m_ag();
        }
        else cout << "\n" << dynamic_cast<Law_agency*>(pAgency[i])->print_l_ag();
    }

    cout << "\n";
}

void List::kharkov_agencies() {

    for (int i = 0; i < pAgency.size(); i++){
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
    for (int i = 1; i < pAgency.size(); i++){
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
    for (int i = 0; i < pAgency.size(); i++){
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

    for (int i = 0; i < pAgency.size(); i++){
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

Law_agency& List::get_ag(int index) const {
    return *dynamic_cast<Law_agency*>(pAgency[index]);
}

void List::sort() {
    Functor my_functor;
    for (int i = 0; i < pAgency.size(); i++){
        for (int j = 0; j < pAgency.size() - 1; j++){
            if (my_functor(pAgency[j]->get_age(), pAgency[j+1]->get_age())){
                swap(pAgency[j], pAgency[i+1]);
            }
        }
    }
}

void List::merge(List my_list){
    vector<Agency*>to_combine = my_list.get_vector();

    pAgency.insert( pAgency.end(), to_combine.begin(), to_combine.end());
}

void List::remove_last() {
    pAgency.erase(pAgency.end() - 1);
}
