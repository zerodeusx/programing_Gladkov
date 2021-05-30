#include "data.h"
#include "list.h"

void test_remove_link(){

    struct Agency *head = NULL;
    head = malloc(sizeof(struct Agency));

    strcpy(head->agency_boss.first_name, "x");
    strcpy(head->agency_boss.second_name, "x");
    strcpy(head->agency_boss.email, "x");
    strcpy(head->agency_name, "x");
    strcpy(head->servicing_city, "x");
    head->agency_age = 5;
    head->have_weekends = 0;

    head->next = malloc(sizeof(struct Agency));
    strcpy(head->next->agency_boss.first_name, "l");
    strcpy(head->next->agency_boss.second_name, "l");
    strcpy(head->next->agency_boss.email, "l");
    strcpy(head->next->agency_name, "l");
    strcpy(head->next->servicing_city, "l");
    head->next->agency_age = 20;
    head->next->have_weekends = 0;

    head->next->next = malloc(sizeof(struct Agency));
    strcpy(head->next->next->agency_boss.first_name, "b");
    strcpy(head->next->next->agency_boss.second_name, "b");
    strcpy(head->next->next->agency_boss.email, "b");
    strcpy(head->next->next->agency_name, "b");
    strcpy(head->next->next->servicing_city, "b");
    head->next->next->agency_age = 10;
    head->next->next->have_weekends = 0;

    remove_link(&head, 2);

    struct Agency *current = head;

    int counter = 1;
    while (current != NULL) {
        if (strcmp(current->agency_boss.first_name, "b") == 0 && counter == 2){
            printf("Test passed!");
        }
        else if (strcmp(current->agency_boss.first_name, "b") != 0 && counter == 2){
            printf("Test failed!");
        }
        counter++;
        current = current->next;
    }
}