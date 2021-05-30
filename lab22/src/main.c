/**
 * @mainpage
 * # Загальне завдання
 * 1. **Зробити** програму з регулярними виразима у якостi крiтерiiв 
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
#include "lib.h"

int main() {

    time_t t_start = time(NULL);

    struct Agency *our_agency = malloc(sizeof(struct Agency));
    strcpy(our_agency->agency_boss.first_name, "xxxxx");
    strcpy(our_agency->agency_boss.second_name, "gxxxxx");
    strcpy(our_agency->agency_boss.email, "xxxxx");
    strcpy(our_agency->agency_name, "xxxxx");
    strcpy(our_agency->servicing_city, "xxxx");
    our_agency->agency_age = 111;
    our_agency->have_weekends = 0;
    our_agency->next = NULL;

    printf("Your list:\n");
    printList(our_agency);
    printf("New:\n");
    append(&our_agency);
    printList(our_agency);
    printf("Done!!!\n");

    push(&our_agency);
    printList(our_agency);
    printf("Done!!!!!!!!!!!!!\n");

    insertAfter(our_agency);
    printList(our_agency);
    printf("Done!!!\n");

    int arr[] = {12, 56, 2, 11, 1, 90};
    int i;

    struct Node *start = NULL;

    for (i = 0; i< 6; i++){
        insertAtTheBegin(&start, arr[i]);
    }


    printf("\nLinked list before sorting ");
    print_node(start);

    bubbleSort(start);

    printf("\nLinked list after sorting ");
    print_node(start);

    printf("\n\n\nMore than 2!");
    print_if_more_than2(our_agency);

    printf("\nTest time!\n");
    test_append();

    time_t end = time(NULL);
    TASK();
    TIME_CHECK(t_start, end);

    return 0;
}
