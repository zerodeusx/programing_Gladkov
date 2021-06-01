#include "list.h"

int main() {

    List * my_list = new List();
    my_list->add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    my_list->add(new Law_agency("zzzzzzz", "aaaaa", "qqqq", "www", "kharkov", 140, "defence", 10));
    my_list->add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    my_list->add(new Mar_agency("1111", "YEA", "Email@@", "F", "kharkov", 120, "idk", "England", true));
    my_list->add((Agency*)new Law_agency("234234", "NOW", "Em@@ail", "heFFFlp", "kharkov", 10));
    my_list->add(new Law_agency("zzzzzzz", "aaaaa", "qqqq", "www", "kharkov", 140, "defence", 10));
    my_list->add((Agency*)new Law_agency("2222", "NOW", "Em@@ail", "heFFFlp", "kharkov", 10));

    cout << "Was:\n";
    my_list->print();

    cout << "Now:\n";
    my_list->change_vals();
    my_list->print();


    my_list->test();
    return 0;
}
