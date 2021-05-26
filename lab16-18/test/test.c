#include "../src/lib.h"

void test_struct_appender(){

    int amount_of_struct = 2;

    struct Agency *our_agencies = malloc(sizeof(struct Agency) * amount_of_struct);

    our_agencies[0].have_weekends = 1;
    our_agencies[0].agency_age = 11;
    strcpy(our_agencies[0].agency_boss.first_name, "John");
    strcpy(our_agencies[0].agency_boss.second_name, "Wick");
    strcpy(our_agencies[0].agency_boss.email, "boss@gmail.com");
    strcpy(our_agencies[0].servicing_city, "Kharkiv");
    strcpy(our_agencies[0].agency_name, "Lover");

    our_agencies[1].have_weekends = 0;
    our_agencies[1].agency_age = 10;
    strcpy(our_agencies[1].agency_boss.first_name, "Kostya");
    strcpy(our_agencies[1].agency_boss.second_name, "Gladkov");
    strcpy(our_agencies[1].agency_boss.email, "lol@gmail.com");
    strcpy(our_agencies[1].servicing_city, "London");
    strcpy(our_agencies[1].agency_name, "Helper");

    int new_size = 3;

    struct Agency *new_agency = malloc(sizeof(struct Agency) * new_size);

    struct_appender(our_agencies, new_agency, amount_of_struct, new_size);

    for (int i = 0; i < amount_of_struct; i++){
        if (strcmp(our_agencies[i].agency_boss.first_name, "Kostya") == 0 || strcmp(our_agencies[i].agency_boss.first_name, "John") == 0){
            printf("agency_boss.first_name are equal.\n");
        }
        else {
            printf("agency_boss.first_name aren't equal.\n");
        }
        if (strcmp(our_agencies[i].agency_boss.second_name, "Gladkov") == 0 || strcmp(our_agencies[i].agency_boss.second_name, "Wick") == 0){
            printf("agency_boss.second_name are equal.\n");
        }
        else {
            printf("agency_boss.second_name aren't equal.\n");
        }
        if (strcmp(our_agencies[i].agency_boss.email, "lol@gmail.com") == 0 || strcmp(our_agencies[i].agency_boss.email, "boss@gmail.com") == 0){
            printf("agency_boss.email are equal.\n");
        }
        else {
            printf("agency_boss.email aren't equal.\n");
        }
        if (our_agencies[i].agency_age == 10 || our_agencies[i].agency_age == 11){
            printf("agency_age are equal.\n");
        }
        else {
            printf("agency_age aren't equal.\n");
        }
        if (strcmp(our_agencies[i].servicing_city, "London") == 0 || strcmp(our_agencies[i].servicing_city, "Kharkiv") == 0){
            printf("servicing_city are equal.\n");
        }
        else {
            printf("servicing_city aren't equal.\n");
        }
        if (our_agencies[i].have_weekends == 0 || our_agencies[i].have_weekends == 1){
            printf("have_weekends are equal.\n");
        }
        else {
            printf("have_weekends aren't equal.\n");
        }
        if (strcmp(our_agencies[i].agency_name, "Helper") == 0 || strcmp(our_agencies[i].agency_name, "Lover") == 0){
            printf("agency_name are equal.\n");
        }
        else {
            printf("agency_name aren't equal.\n");
        }
    }

}