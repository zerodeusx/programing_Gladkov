#include "../src/lib.h"

void test_defence_in_court_law_agencies2(){

    int amount_of_struct = 4;

    struct Law_agency *our_agencies = malloc(sizeof(struct Law_agency) * amount_of_struct);

    our_agencies[0].agency_for_law.have_weekends = 1;
    our_agencies[0].agency_for_law.agency_age = 11;
    strcpy(our_agencies[0].agency_for_law.agency_boss.first_name, "John");
    strcpy(our_agencies[0].agency_for_law.agency_boss.second_name, "Wick");
    strcpy(our_agencies[0].agency_for_law.agency_boss.email, "boss@gmail.com");
    strcpy(our_agencies[0].agency_for_law.servicing_city, "Kharkiv");
    strcpy(our_agencies[0].agency_for_law.agency_name, "Lover");
    our_agencies[0].won_cases = 10;
    strcpy(our_agencies[0].service_type, "idk");

    our_agencies[1].agency_for_law.have_weekends = 0;
    our_agencies[1].agency_for_law.agency_age = 130;
    strcpy(our_agencies[1].agency_for_law.agency_boss.first_name, "Kostya");
    strcpy(our_agencies[1].agency_for_law.agency_boss.second_name, "Gladkov");
    strcpy(our_agencies[1].agency_for_law.agency_boss.email, "lol@gmail.com");
    strcpy(our_agencies[1].agency_for_law.servicing_city, "London");
    strcpy(our_agencies[1].agency_for_law.agency_name, "Helper");
    our_agencies[1].won_cases = 12;
    strcpy(our_agencies[1].service_type, "idc");

    our_agencies[2].agency_for_law.have_weekends = 0;
    our_agencies[2].agency_for_law.agency_age = 120;
    strcpy(our_agencies[2].agency_for_law.agency_boss.first_name, "me");
    strcpy(our_agencies[2].agency_for_law.agency_boss.second_name, "u");
    strcpy(our_agencies[2].agency_for_law.agency_boss.email, "wow@gmail.com");
    strcpy(our_agencies[2].agency_for_law.servicing_city, "Kiev");
    strcpy(our_agencies[2].agency_for_law.agency_name, "rofl");
    our_agencies[2].won_cases = 2;
    strcpy(our_agencies[2].service_type, "xd");

    our_agencies[3].agency_for_law.have_weekends = 1;
    our_agencies[3].agency_for_law.agency_age = 12;
    strcpy(our_agencies[3].agency_for_law.agency_boss.first_name, "Kostya");
    strcpy(our_agencies[3].agency_for_law.agency_boss.second_name, "Gladkov");
    strcpy(our_agencies[3].agency_for_law.agency_boss.email, "i@gmail.com");
    strcpy(our_agencies[3].agency_for_law.servicing_city, "London");
    strcpy(our_agencies[3].agency_for_law.agency_name, "meme");
    our_agencies[3].won_cases = 1;
    strcpy(our_agencies[3].service_type, "lol");

    defence_in_court_law_agencies2(our_agencies, amount_of_struct);

    if (our_agencies[0].won_cases == 1){
        printf("Test has passed!\n");
    }
    if (our_agencies[1].won_cases == 2){
        printf("Test has passed!\n");
    }
    if (our_agencies[2].won_cases == 10){
        printf("Test has passed!\n");
    }
    if (our_agencies[3].won_cases == 12){
        printf("Test has passed!\n");
    }

}