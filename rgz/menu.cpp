#include "menu.h"
#include "controller.h"

void Menu::start() {
    int choice;
    Controller *my_list = new Controller();
    my_list->add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    my_list->add(new Law_agency("zzzzzzz", "aaaaa", "qqqq", "www", "kharkov", 140, "defence", 10));
    my_list->add(new Law_agency("Kostya", "Gladkov", "Email", "sth", "london", 150, "defence", 22));
    my_list->add(new Mar_agency("1111", "YEA", "Email@@", "F", "kharkov", 120, "idk", "England", true));
    my_list->add((Agency *) new Law_agency("234234", "NOW", "Em@@ail", "heFFFlp", "kharkov", 10));
    my_list->add(new Law_agency("zzzzzzz", "aaaaa", "qqqq", "www", "kharkov", 140, "defence", 10));
    my_list->add((Agency *) new Law_agency("2222", "NOW", "Em@@ail", "heFFFlp", "kharkov", 10));

    cout << ">>>List generated!\n";
    for (;;){

        cout << "\n\n\n----------\n>>>You can:"
                "\n[1] - print your current list"
                "\n[2] - add another element to list"
                "\n[3] - sort list"
                "\n[4] - search list"
                "\n[5] - find all kharkov agencies with 3+ years experience"
                "\n[6] - find all marriage agencies without weekends"
                "\n[7] - find law agency with most wins"
                "\n[8] - exit"
                "\n>>>Your choice:";
        cin >> choice;
        if (choice == 8){
            break;
        }
        else if (choice < 0 || choice > 8){
            cout << "\nWrong input!";
            exit(1);
        }
        else if (choice == 1){
            my_list->print();
        }
        else if (choice == 2){
            int which;
            cout << "\nWhat do you want to add?"
                    "\n[1] - Agency"
                    "\n[2] - Law agency"
                    "\n[3] - Marriage agency"
                    "\nYour choice:";
            cin >> which;
            if (which > 3 || which < 0){
                cout << "\nWrong input!";
                exit(1);
            }
            else if (which == 1){
                char name[50];
                char city[50];
                int age;
                struct boss the_boss;

                cout << "\nEnter boss first name:";
                cin >> the_boss.first_name;
                cout << "\nEnter boss second name:";
                cin >> the_boss.second_name;
                cout << "\nEnter email:";
                cin >> the_boss.email;
                cout << "\nEnter name:";
                cin >> name;
                cout << "\nEnter city:";
                cin >> city;
                cout << "\nEnter age:";
                cin >> age;

                my_list->add((Agency *) new Law_agency(the_boss.first_name, the_boss.second_name, the_boss.email, name, city, age));
            }
            else if (which == 2){
                char name[50];
                char city[50];
                int age;
                struct boss the_boss;
                char service_type[50];
                int won_cases;

                cout << "\nEnter boss first name:";
                cin >> the_boss.first_name;
                cout << "\nEnter boss second name:";
                cin >> the_boss.second_name;
                cout << "\nEnter email:";
                cin >> the_boss.email;
                cout << "\nEnter name:";
                cin >> name;
                cout << "\nEnter city:";
                cin >> city;
                cout << "\nEnter age:";
                cin >> age;
                cout << "\nEnter service type:";
                cin >> service_type;
                cout << "\nEnter won cases:";
                cin >> won_cases;

                my_list->add(new Law_agency(the_boss.first_name, the_boss.second_name, the_boss.email, name, city, age, service_type, won_cases));
            }
            else if (which == 3){
                char name[50];
                char city[50];
                int age;
                struct boss the_boss;
                char servicing_method[50];
                char cooperation_country[50];
                bool weekends;

                cout << "\nEnter boss first name:";
                cin >> the_boss.first_name;
                cout << "\nEnter boss second name:";
                cin >> the_boss.second_name;
                cout << "\nEnter email:";
                cin >> the_boss.email;
                cout << "\nEnter name:";
                cin >> name;
                cout << "\nEnter city:";
                cin >> city;
                cout << "\nEnter age:";
                cin >> age;
                cout << "\nEnter servicing method:";
                cin >>servicing_method;
                cout << "\nEnter cooperation country:";
                cin >> cooperation_country;
                cout << "Enter true if agency has weekends and false if agency hasn't weekends:";
                cin >> weekends;

                my_list->add(new Mar_agency(the_boss.first_name, the_boss.second_name, the_boss.email, name, city, age, servicing_method, cooperation_country, weekends));
            }
        }
        else if (choice == 3){
            my_list->sort();
        }
        else if (choice == 4){
            my_list->search();
        }
        else if (choice == 5){
            my_list->kharkov_aged();
        }
        else if (choice == 6){
            my_list->mar_without_weekends();
        }
        else if (choice == 7){
            my_list->law_with_most_wons();
        }

    }
}
