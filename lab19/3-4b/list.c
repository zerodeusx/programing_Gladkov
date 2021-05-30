#include "list.h"

void print_list(struct Agency *to_print){
    struct Agency *current = to_print;

    while (current != NULL) {
        printf("Boss first name: %s\nBoss second name: %s\nBoss email: %s\nAgency name: %s\nServicing city: %s\nAgency age: %d\nHave weekends parameter: %d\n\n\n", current->agency_boss.first_name, current->agency_boss.second_name, current->agency_boss.email, current->agency_name, current->servicing_city, current->agency_age, current->have_weekends);
        current = current->next;
    }
}

void write_to_file(struct Agency *to_write){

    FILE *fp = fopen("/home/blank/lists.txt", "w");

    struct Agency *current = to_write;

    while (current != NULL) {
        fprintf(fp, "%s\n%s\n%s\n%s\n%s\n%d\n%d\n", current->agency_boss.first_name, current->agency_boss.second_name, current->agency_boss.email, current->agency_name, current->servicing_city, current->agency_age, current->have_weekends);
        current = current->next;
    }

    fclose(fp);
}

int am_of_structs(){

    FILE *fp = fopen("/home/blank/lists.txt", "r");

    //extract character from file and store in chr
    int count_lines = 0;
    char chr;

    chr = getc(fp);

    while (chr != EOF){

        if (chr == '\n'){
            count_lines = count_lines + 1;
        }

        chr = getc(fp);
    }

    fclose(fp);

    return count_lines / 7;
}

void read_from_file(int amount){

    FILE *fp = fopen("/home/blank/lists.txt", "r");

    struct Agency current[amount];

    for (int i = 0; i < amount; i++){
        fscanf(fp, "%s\n%s\n%s\n%s\n%s\n%d\n%d\n", current[i].agency_boss.first_name, current[i].agency_boss.second_name, current[i].agency_boss.email, current[i].agency_name, current[i].servicing_city, &current[i].agency_age, &current[i].have_weekends);
    }

    printf("Your file had this:\n");
    for (int i = 0; i < amount; i++){
        printf("%d)\n%s\n%s\n%s\n%s\n%s\n%d\n%d\n\n\n", i + 1, current[i].agency_boss.first_name, current[i].agency_boss.second_name, current[i].agency_boss.email, current[i].agency_name, current[i].servicing_city, current[i].agency_age, current[i].have_weekends);
    }

    fclose(fp);

}

void push_to_end(struct Agency *head){

    struct Agency *current = head;

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = malloc(sizeof(struct Agency));

    agency_filler(current->next);
}

void remove_link(struct Agency **head, int index){

    if (*head == NULL) {
        return;
    }
    struct Agency* temp = *head;
    if (index == 1) {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 2; temp != NULL && i < index - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        return;
    }
    struct Agency *next = temp->next->next;
    free(temp->next);
    temp->next = next;

}

void boss_finder(struct Agency *head){

    char boss_name[20];
    printf("Enter boss name:");
    scanf("%s", boss_name);

    struct Agency *current = head;

    while (current->next != NULL){
        if (strcmp(boss_name, current->agency_boss.first_name) == 0){
            printf("Boss first name: %s\nBoss second name: %s\nBoss email: %s\nAgency name: %s\nServicing city: %s\nAgency age: %d\nHave weekends parameter: %d\n\n\n", current->agency_boss.first_name, current->agency_boss.second_name, current->agency_boss.email, current->agency_name, current->servicing_city, current->agency_age, current->have_weekends);
        }
        current = current->next;
    }

}