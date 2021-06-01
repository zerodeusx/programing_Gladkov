#include "list.h"

void List::test() {
    List test;
    test.add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    test.add(new Mar_agency("1111", "YEA", "Email@@", "F", "kharkov", 120, "idk", "England", true));
    test.add(new Law_agency("xdddd", "ssss", "ddddd", "vvvvv", "kiev", 110, "not defence", 101));
    test.add(new Mar_agency("2222", "NOW", "Em@@ail", "heFFFlp", "kharkov", 10, "idk", "USA", false));
    test.add(new Law_agency("zzzzzzz", "aaaaa", "qqqq", "www", "kharkov", 140, "defence", 10));
    test.add(new Mar_agency("3333", "XDD", "@@Email", "heFFFlp", "Berlin", 10, "idk", "China", false));

    test.change_vals();
    int val1 = 15;
    int val2 = 20;
    int val3 = 125;
    int val4 = 42;

    if (test.pAgency[0]->get_age() == val1){
        cout << "\nTest 1 passed!";
    }
    else {
        cout << "\nTest 1 failed!\nExpected: " << val1 <<"\nActual: " << test.pAgency[0]->get_age();
    }
    if (test.pAgency[1]->get_age() == val2){
        cout << "\nTest 2 passed!";
    }
    else {
        cout << "\nTest 2failed!\nExpected: " << val2 <<"\nActual: " << test.pAgency[0]->get_age();
    }
    if (test.pAgency[2]->get_age() == val3){
        cout << "\nTest 3 passed!";
    }
    else {
        cout << "\nTest 3 failed!\nExpected: " << val3 <<"\nActual: " << test.pAgency[0]->get_age();
    }
    if (test.pAgency[3]->get_age() == val4){
        cout << "\nTest 4 passed!";
    }
    else {
        cout << "\nTest 4 failed!\nExpected: " << val4 <<"\nActual: " << test.pAgency[3]->get_age();
    }
}
