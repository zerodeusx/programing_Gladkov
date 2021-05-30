/**
 * @mainpage
 * # Загальне завдання
 * 1. **Зробити** програму з макровизначенням
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
    printf("Done!!!\n");

    insertAfter(our_agency);
    printList(our_agency);
    printf("Done!!!\n");

    int arr[] = {12, 56, 2, 11, 1, 90};
    int list_size, i;

    struct Node *start = NULL;

    for (i = 0; i< 6; i++){
        insertAtTheBegin(&start, arr[i]);
    }


    printf("\nLinked list before sorting ");
    print_node(start);

    bubbleSort(start);

    printf("\nLinked list after sorting ");
    print_node(start);


    printf("\nTest time!\n");
    test_append();

    printf("\n");


#ifndef DEBUG
    time_t end = time(NULL);
    TASK();
    TIME_CHECK(t_start, end);
#endif DEBUG


    return 0;
}
