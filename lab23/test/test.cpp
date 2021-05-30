#include "list.h"

void List::test_oldest() {

    List my_l;
    my_l.add_ag(Agency("Kostya", "Gladkov", "Email", "help", "London", 10));
    my_l.add_ag(Agency("xddd", "yyyyy", "Email2", "nope", "London", 188));
    my_l.add_ag(Agency("yyyyy", "Noone", "xddd", "nope", "London", 175));

    int exp_oldest = 1;

    int act_oldest = my_l.get_oldest_ag();

    if (exp_oldest == act_oldest){
        cout << "\nTest passed! (oldest)";
    }
    else {cout << "\nFailed! (oldest)";}

}

void List::test_remove() {
    List my_l;
    my_l.add_ag(Agency("Kostya", "Gladkov", "Email", "help", "London", 10));
    my_l.add_ag(Agency("xddd", "yyyyy", "Email2", "nope", "London", 188));

    my_l.remove_last_ag();

    int am = my_l.get_num();

    if (am == 1){
        cout << "\nTest passed! (remove)";
    }
    else {cout << "\nFailed! (remove)";}
}

void List::test_add() {
    List my_l;

    my_l.add_ag(Agency("Kostya", "Gladkov", "Email", "help", "London", 10));
    my_l.add_ag(Agency("xddd", "yyyyy", "Email2", "nope", "London", 188));

    int am = my_l.get_num();

    if (am == 2 && my_l.get_oldest_ag() == 1){
        cout << "\nTest passed! (remove)";
    }
    else {cout << "\nFailed! (remove)";}
}