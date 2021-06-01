#include "list.h"

void List::test() {
    List * test = new List();
    test->add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    test->add(new Mar_agency("1111", "YEA", "Email@@", "F", "kharkov", 120, "idk", "England", true));
    test->add(new Law_agency("xdddd", "ssss", "ddddd", "vvvvv", "kiev", 110, "not defence", 101));
    test->add(new Mar_agency("2222", "NOW", "Em@@ail", "heFFFlp", "kharkov", 10, "idk", "USA", false));
    test->add(new Law_agency("zzzzzzz", "aaaaa", "qqqq", "www", "kharkov", 140, "defence", 10));
    test->add(new Mar_agency("3333", "XDD", "@@Email", "heFFFlp", "Berlin", 10, "idk", "China", false));

    int expected1 = 6;
    if (test->get_cap() == expected1){
        cout << "Test 1 passed!\n";
    }
    else {
        cout << "Test 1 failed!\n";
        cout << "\nExpected: " << expected1 << "\nGot: " << test->get_cap();
    }

    int expected2 = 2;
    if (test->most_wins_law() == expected2){
        cout << "Test 2 passed!\n";
    }
    else {
        cout << "Test 2 failed!\n";
        cout << "\nExpected: " << expected2 << "\nGot: " << test->most_wins_law();
    }
}
