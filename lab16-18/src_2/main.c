#include "lib.h"
/**
 * @mainpage
 * # Загальне завдання
 * 1. **Зробити** программу, яку працюе з структурами
 *
 * @author Gladkov K.
 * @date 11-jan-2021
 * @version 1.0
 */

/**
* @file main.c
* @brief Файл з main, який також викликае функцii
*
* @author Gladkov K.
* @date 11-jan-2020
* @version 1.0
*/

int main() {

    int amount_of_structs = 2;

    struct Agency *our_agencies = malloc(sizeof(struct Agency) * amount_of_structs);

    our_agencies[0].have_weekends = 0;
    our_agencies[0].agency_age = 10;
    strcpy(our_agencies[0].agency_boss.first_name, "Kostya");
    strcpy(our_agencies[0].agency_boss.second_name, "Gladkov");
    strcpy(our_agencies[0].agency_boss.email, "lol@gmail.com");
    strcpy(our_agencies[0].servicing_city, "London");
    strcpy(our_agencies[0].agency_name, "Helper");

    our_agencies[1].have_weekends = 1;
    our_agencies[1].agency_age = 10;
    strcpy(our_agencies[1].agency_boss.first_name, "John");
    strcpy(our_agencies[1].agency_boss.second_name, "Wick");
    strcpy(our_agencies[1].agency_boss.email, "boss@gmail.com");
    strcpy(our_agencies[1].servicing_city, "Kharkiv");
    strcpy(our_agencies[1].agency_name, "Lover");

    int new_size_append = 4;
    struct Agency *new_agency = malloc(sizeof(struct Agency) * new_size_append);

    printf("Your current agency:\n");
    agency_reader(our_agencies, amount_of_structs);

    printf("\nFor your new agency you will have to add the new elements:\n");
    struct_appender(our_agencies, new_agency, amount_of_structs, new_size_append);

    printf("\nYour new agency appended:\n");
    agency_reader(new_agency, new_size_append);

    int new_size_remove = 3;
    struct Agency *new_agency_removed = malloc(sizeof(struct Agency) * new_size_remove);
    struct_remover(new_agency, new_agency_removed, new_size_append, new_size_remove);

    printf("\nYour new agency removed:\n");
    agency_reader(new_agency_removed, new_size_remove);

    printf("\nTest time!\n");
    test_struct_appender();

    return 0;
}

