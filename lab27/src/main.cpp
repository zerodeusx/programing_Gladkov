#include "list.h"

int main() {

    List * my_list = new List();
    my_list->add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    my_list->add(new Mar_agency("1111", "YEA", "Email@@", "F", "kharkov", 120, "idk", "England", true));
    my_list->add(new Law_agency("xdddd", "ssss", "ddddd", "vvvvv", "kiev", 110, "not defence", 101));
    my_list->add(new Mar_agency("2222", "NOW", "Em@@ail", "heFFFlp", "kharkov", 10, "idk", "USA", false));
    my_list->add(new Law_agency("zzzzzzz", "aaaaa", "qqqq", "www", "kharkov", 140, "defence", 10));
    my_list->add(new Mar_agency("3333", "XDD", "@@Email", "heFFFlp", "Berlin", 10, "idk", "China", false));

    cout << "!!!Your list is:\n";
    my_list->print();

    cout << "!!!Agencies in Kharkov:\n";
    my_list->kharkov_agencies();

    cout << "!!!Law agency with most wins:\n";
    cout << "\n" << dynamic_cast<Law_agency*>(my_list->pAgency[my_list->most_wins_law()])->print_l_ag();

    cout << "!!!Law agencies defending in court:\n";
    my_list->defence_in_court();

    cout << "!!!Marriage agencies without weekends:\n";
    my_list->no_weekends_mar_agencies();

    my_list->test();

    return 0;
}
