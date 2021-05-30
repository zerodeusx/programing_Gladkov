#include "lib.h"


void test_append(){

    time_t t_start = time(NULL);

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
        printf("Test has passed!\n");
    }
    else {
        printf("Test failed!\n");
    }

    time_t end = time(NULL);
    TASK();
    TIME_CHECK(t_start, end);

}