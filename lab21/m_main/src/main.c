#include "../../m_lib/src/lib.h"

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

//    printf("Your list:\n");
//    printList(our_agency);
//    printf("New:\n");
//    append(&our_agency);
//    printList(our_agency);
//    printf("Done!!!\n");
//
//    push(&our_agency);
//    printList(our_agency);
//    printf("Done!!!\n");
//
//    insertAfter(our_agency);
//    printList(our_agency);
//    printf("Done!!!\n");

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

//    int choice;
//    printf("for the time control:");
//    scanf("%d", &choice);


    time_t end = time(NULL);
    TASK();
    TIME_CHECK(t_start, end);


    return 0;
}
