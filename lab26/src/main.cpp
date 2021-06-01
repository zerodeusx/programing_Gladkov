#include "list.h"

int main() {

    List my_list;

//    my_list.read_from_file("/home/blank/read.txt", my_list);

    my_list.add_ag(Agency("Kostya", "Gladkov", "Email", "help", "London", 10));
    my_list.add_ag(Agency("Someone", "Noone", "Email", "nope", "London", 15));

    for (int i = 0; i < my_list.get_num(); i++){
        cout << my_list.get_ag(i).get_info() << "\n";
    }

    my_list.add_ag(Agency("xddd", "xddd", "xddd", "xddd", "xddd", 20));

    cout << "\n\nNew:\n";

    for (int i = 0; i < my_list.get_num(); i++){
        cout << my_list.get_ag(i).get_info() << "\n";
    }

    cout << "\n\nOldest:\n";
    cout << my_list.get_ag(my_list.get_oldest_ag()).get_info();

    cout << "\n\nIndexed:\n";
    cout << my_list.get_ag(1).get_info();

    cout << "\n\nRemoved:\n";
    my_list.remove_last_ag();
    for (int i = 0; i < my_list.get_num(); i++){
        cout << my_list.get_ag(i).get_info() << "\n";
    }

//    my_list.write_to_file("/home/blank/write.txt");

    my_list.test_oldest();
    my_list.test_remove();
    my_list.test_add();


    cout << "\n\nInheritance!\n";


    cout << "\nLaw!\n";
    List_law law_ag_list;

    law_ag_list.add_ag(Law_agency("Kostya", "Gladkov", "Email", "help", "kharkov", 10, "defence", 3));
    law_ag_list.add_ag(Law_agency("Not", "dfffff", "Email", "help", "kharkov", 10, "sth else", 32));
    law_ag_list.add_ag(Law_agency("ME", "xxxxxxxx", "Email", "help", "London", 10, "sth else", 31));
    law_ag_list.add_ag(Law_agency("you", "ddddddd", "Email", "help", "London", 10, "defence", 34));

    cout << "\nDefence in court:\n";
    law_ag_list.defence_in_court();
    cout << "\nKharkov:\n";
    law_ag_list.kharkov_agencies();
    cout << "Most won cases:\n";
    int i_index = law_ag_list.most_won_cases();
    cout << law_ag_list.get_ag(i_index).print_l_ag();
    law_ag_list.test();


    cout << "\n\nMarriage!\n";
    List_mar mar_ag_list;
    mar_ag_list.add_ag(Mar_agency("Kostya", "Gladkov", "Email", "help", "kharkov", 10, "idk", "England", true));
    mar_ag_list.add_ag(Mar_agency("Not", "dfffff", "Email", "help", "kharkov", 10, "sth else", "Kiev", false));
    mar_ag_list.add_ag(Mar_agency("ME", "xxxxxxxx", "Email", "help", "London", 10, "yea", "Tokyo", true));
    mar_ag_list.add_ag(Mar_agency("you", "ddddddd", "Email", "help", "London", 10, "wow", "German", false));

    cout << "\nNo weekends:\n";
    mar_ag_list.no_weekends_mar_agencies();
    cout << "\nKharkov:\n";
    mar_ag_list.kharkov_agencies();
    mar_ag_list.test();


    exit(0);
}
