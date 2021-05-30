/**
* @file test.c
* @brief Файл з тестом
*
* @author Gladkov K.
* @date 11-jan-2021
* @version 1.0
*/
#include "lib.h"

void test_append(){

    struct Agency *our_agency = malloc(sizeof(struct Agency));

    strcpy(our_agency->agency_boss.first_name, "fffff");
    strcpy(our_agency->agency_boss.second_name, "fffff");
    strcpy(our_agency->agency_boss.email, "fffffff");
    strcpy(our_agency->agency_name, "ffff");
    strcpy(our_agency->servicing_city, "fffffff");
    our_agency->agency_age = 111;
    our_agency->have_weekends = 0;
    our_agency->next = NULL;

    printf("\nBefore:\n");
    printList(our_agency);
    append(&our_agency);
    printf("\nAfter:\n");
    printList(our_agency);

    int counter = 1;
    while (our_agency != NULL){
        our_agency = our_agency->next;
        counter++;
    }

    if (counter == 3){
        printf("Test has passed!");
    }
    else {
        printf("Test failed!");
    }
}