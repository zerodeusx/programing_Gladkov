#include "list.h"

void List::test() {

    List my_l;
    my_l.add_ag(Agency("Kostya", "Gladkov", "Email", "help", "London", 10));
    my_l.add_ag(Agency("xddd", "yyyyy", "Email2", "nope", "London", 188));
    my_l.add_ag(Agency("yyyyy", "Noone", "xddd", "nope", "London", 175));

    int exp_oldest = 1;

    int act_odlest = my_l.get_oldest_ag();

    if (exp_oldest == act_odlest){
        cout << "\nTest passed!";
    }
    else {cout << "\nFailed!";}

}
