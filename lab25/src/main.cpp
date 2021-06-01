#include "list.h"

int main() {

    List my_list;

    my_list.read_from_file("/home/blank/read.txt", my_list);

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

    my_list.write_to_file("/home/blank/write.txt");


    cout << "\nOverloadings basic class!\n";

    Agency for_operator("Kosdastya", "Gladsdfsdkov", "Emasdfsil", "hesdlp", "Londsson", 10);
    Agency operator1;
    operator1 = for_operator;

    cout << "=" << operator1.get_info();

    if (operator1 == for_operator)
        cout << "\nAre the same! (== overloading)\n";
    else
        cout << "\nArent!(== overloading)\n";

    cout << "\nOutput overloading (<< overloading):\n" << operator1;

    cout << "\nInput overloading (>> overloading):\n";

    Agency to_input;
    cin >> to_input;

    cout << "\nYou entered: " << to_input << '\n';



    cout << "\nOverloadings list!\n";

    cout << my_list[1];


    cout << "\n";
    my_list.test();

    exit(0);
}
