#include "list.h"

int main() {

    cout << endl;

    List my_list;

    my_list.add_ag(Agency("Kostya", "Gladkov", "Email", "help", "London", 10));
    my_list.add_ag(Agency("Someone", "Noone", "Email", "nope", "London", 15));

    for (int i = 0; i < my_list.get_num(); i++){
        cout << my_list.get_ag(i).get_info() << "\n";
    }

    my_list.add_ag(Agency("xddd", "xddd", "xddd", "xddd", "xddd", 20));

    cout << "\nNew:\n";

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

    cout << "\nTests:\n";
    my_list.test_add();
    my_list.test_remove();
    my_list.test_oldest();


    exit(0);
}
