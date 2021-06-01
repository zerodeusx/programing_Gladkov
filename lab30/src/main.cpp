#include "list.h"

int main() {

    List * my_list = new List();
    my_list->add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    my_list->add(new Mar_agency("1111", "YEA", "Email@@", "F", "kharkov", 120, "idk", "England", true));
    my_list->add(new Law_agency("xdddd", "ssss", "ddddd", "vvvvv", "kiev", 110, "not defence", 101));
    my_list->add(new Mar_agency("2222", "NOW", "Em@@ail", "heFFFlp", "kharkov", 10, "idk", "USA", false));
    my_list->add(new Law_agency("zzzzzzz", "aaaaa", "qqqq", "www", "kharkov", 140, "defence", 10));
    my_list->add(new Mar_agency("3333", "XDD", "@@Email", "heFFFlp", "Berlin", 10, "idk", "China", false));

    cout << "!!!Your list is:";
    my_list->print();

    cout << "!!!Your kharkov agencies:";
    my_list->kharkov_agencies();

    cout << "!!!Your law agency with most wins:";
    cout << "\n" << my_list->get_ag(my_list->most_wins_law()).print_l_ag();

    cout << "!!!Your marriage agencies without weekends:";
    my_list->no_weekends_mar_agencies();

    cout << "!!!Your law agencies with defense in court:";
    my_list->defence_in_court();

    cout << "!!!Sorted:";
    my_list->sort();
    my_list->print();

    cout << "!!!Merged:";
    List *trying = new List();
    trying->add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    trying->add(new Mar_agency("1111", "YEA", "Email@@", "F", "kharkov", 120, "idk", "England", true));
    my_list->merge(*trying);
    my_list->print();

    cout << "!!!Removed last index:";
    my_list->remove_last();
    my_list->print();

    cout << "!!!Test:";
    my_list->test();

    return 0;
}
