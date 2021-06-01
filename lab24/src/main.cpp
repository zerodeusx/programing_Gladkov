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

    cout << "\nDone:\n";
    Agency F("this is an agency yea 10");
    cout << F.get_info();

    my_list.test();

    exit(0);
}
