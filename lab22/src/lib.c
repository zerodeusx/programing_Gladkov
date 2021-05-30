/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 *
 * @author Gladkov K.
 * @date 11-jan-2021
 * @version 1.0
 */
 #include "lib.h"

void append(struct Agency** head_ref){

    struct Agency* new_node = malloc(sizeof(struct Agency));

    struct Agency* last = *head_ref;

    strcpy(new_node->agency_boss.first_name, "x D");
    strcpy(new_node->agency_boss.second_name, "x");
    strcpy(new_node->agency_boss.email, "x");
    strcpy(new_node->agency_name, "x");
    strcpy(new_node->servicing_city, "x");
    new_node->agency_age = 5;
    new_node->have_weekends = 0;

    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;

    new_node->prev = last;

}

void push(struct Agency** head_ref){

    struct Agency* new_node = malloc(sizeof(struct Agency));


    // * change this for new pattern result (first name)
    strcpy(new_node->agency_boss.first_name, "gX d");
    strcpy(new_node->agency_boss.second_name, "g");
    strcpy(new_node->agency_boss.email, "g");
    strcpy(new_node->agency_name, "g");
    strcpy(new_node->servicing_city, "g");
    new_node->agency_age = 11;
    new_node->have_weekends = 0;

    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;

}

void insertAfter(struct Agency* prev_node){

    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Agency* new_node = malloc(sizeof(struct Agency));

    regex_t regex;
    regcomp(&regex, "[a-zA-Z0-9а-я]",0);
    // eng + rus + nums

    int return_value = regexec(&regex, new_node->agency_name, 0, NULL, 0);
    regcomp(&regex, "^[A-Z]",0);
    // upper check

    int return_value2 = regexec(&regex, new_node->agency_name, 0, NULL, 0);
    regcomp(&regex, " ",0);
    // 2+ words

    int return_value3 = regexec(&regex, new_node->agency_name, 0, NULL, 0);

//    printf("\nPatters:\n");
//    pattern(return_value);
//    pattern(return_value2);
//    pattern(return_value3);

    if (return_value == 0 && return_value3 == 0 || return_value2 == 0){
        printf("\nPatter found! Will continue!\n");
        strcpy(new_node->agency_boss.first_name, "e");
        strcpy(new_node->agency_boss.second_name, "e");
        strcpy(new_node->agency_boss.email, "e");
        strcpy(new_node->agency_name, "e");
        strcpy(new_node->servicing_city, "e");
        new_node->agency_age = 15;
        new_node->have_weekends = 0;

        new_node->next = prev_node->next;

        prev_node->next = new_node;

        new_node->prev = prev_node;

        if (new_node->next != NULL)
            new_node->next->prev = new_node;
    }
    else if (return_value != 0 || return_value2 != 0 || return_value3 != 0){
        printf("No pattern found, so wont apply changes\n\n");
    }

}

void print_node(struct Node *start)
{
    struct Node *temp = start;
    printf("\n");
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void print_if_more_than2(struct Agency* node)
{
    regex_t regex;
    regcomp(&regex, " ",0);
    int return_value = regexec(&regex, node->agency_boss.first_name, 0, NULL, 0);

    struct Node* last;

    if (return_value == 0){
        printf("\nPatter found! Will continue!\n");
        while (node != NULL) {
            printf("Boss first name: %s\nBoss second name: %s\nBoss email: %s\nAgency name: %s\nServicing city: %s\nAgency age: %d\nHave weekends parameter: %d\n\n\n", node->agency_boss.first_name, node->agency_boss.second_name, node->agency_boss.email, node->agency_name, node->servicing_city, node->agency_age, node->have_weekends);
            last = node;
            node = node->next;

        }
    }
    else {
        printf("No pattern found, so wont apply changes");
    }
}

void printList(struct Agency* node){

    regex_t regex;
    regcomp(&regex, " ",0);
    int return_value = regexec(&regex, " ", 0, NULL, 0);

    struct Node* last;

    if (return_value == 0){
        printf("\nPatter found! Will continue!\n");
        while (node != NULL) {
            printf("Boss first name: %s\nBoss second name: %s\nBoss email: %s\nAgency name: %s\nServicing city: %s\nAgency age: %d\nHave weekends parameter: %d\n\n\n", node->agency_boss.first_name, node->agency_boss.second_name, node->agency_boss.email, node->agency_name, node->servicing_city, node->agency_age, node->have_weekends);
            last = node;
            node = node->next;

        }
    }
    else {
        printf("No pattern found, so wont apply changes");
    }

}

void swap(int *a, int *b)
{
    int t;

    t  = *b;
    *b = *a;
    *a = t;
}

void bubbleSort(struct Node *start){

    int swapped;
    struct Node *ptr1;
    struct Node *lptr = NULL;

    if (start == NULL) return;

    do{
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                swap(&ptr1->data, &ptr1->next->data);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}

void insertAtTheBegin(struct Node **start_ref, int data) {
    struct Node *ptr1 = malloc(sizeof(struct Node));
    ptr1->data = data;
    ptr1->next = *start_ref;
    if (*start_ref != NULL){
        (*start_ref)->prev = ptr1;
    }
    *start_ref = ptr1;
}

void pattern(int to_compare){
    if (to_compare == 0) {
        printf(">>>Pattern found.<<<\n");
    }
    else if (to_compare == REG_NOMATCH) {
        printf(">>>Pattern not found.<<<\n");
    }
    else {
        printf(">>>Error.<<<\n");
    }
}