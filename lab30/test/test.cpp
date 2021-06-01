#include "list.h"

void List::test() {
    List test;
    test.add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    test.add(new Mar_agency("1111", "YEA", "Email@@", "F", "kharkov", 120, "idk", "England", true));
    test.add(new Law_agency("xdddd", "ssss", "ddddd", "vvvvv", "kiev", 110, "not defence", 101));
    test.add(new Mar_agency("2222", "NOW", "Em@@ail", "heFFFlp", "kharkov", 10, "idk", "USA", false));
    test.add(new Law_agency("zzzzzzz", "aaaaa", "qqqq", "www", "kharkov", 140, "defence", 10));
    test.add(new Mar_agency("3333", "XDD", "@@Email", "heFFFlp", "Berlin", 10, "idk", "China", false));

    int test1 = 2;

    if (test.most_wins_law() == 2){
        cout << "\nTest 1 passed!\n";
    }
    else {
        cout << "\nTest 1 failed!!!\nExpected: " << test1 << " \nGot: " << test.most_wins_law();
    }

    test.sort();
    if (test.get_ag(most_wins_law()).get_won_cases() == 101){
        cout << "\nTest 2 passed!\n";
    }
    else {
        cout << "\nTest 2 failed!!!\nExpected: " << 101 << " \nGot: " << test.get_ag(0).get_won_cases();
    }

    test.add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));

    if(test.get_ag(6).get_age() == 150){
        cout << "\nTest 3 passed!\n";
    }
    else {
        cout << "\nTest 3 failed!!!\nExpected: " << 150 << " \nGot: " << test.get_ag(6).get_age();
    }

}
