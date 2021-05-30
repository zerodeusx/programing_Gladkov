#include "data.h"
#include "list.h"

int main() {

    struct Agency *head = NULL;
    head = malloc(sizeof(struct Agency));

    if (head == NULL){
        return 1;
    }

    agency_filler(head);

    link_creator(head);
    agency_filler(head->next);

    link_creator(head->next);
    agency_filler(head->next->next);

    for(;;){
        int choice;

        printf("You can:\n"
               "1 - Write your structure to file\n"
               "2 - Read your structure from file\n"
               "3 - Print the structure\n"
               "4 - Add a new link to the end\n"
               "5 - Remove a link\n"
               "6 - Find links\n"
               "7 - Test\n"
               "8 - Exit\n\n"
               "Your choice:");

        scanf("%d", &choice);

        if (choice > 8 || choice < 1){
            printf("Wrong input!");
            exit(1);
        }

        if (choice == 8){
            return 0;
        }

        else if (choice == 1){
            write_to_file(head);
            printf("Done!\n");
        }
        else if (choice == 2){
            int amount = am_of_structs();
            read_from_file(amount);
            printf("Done!\n");
        }
        else if (choice == 3){
            print_list(head);
            printf("Done!\n");
        }
        else if (choice == 4){
            push_to_end(head);
            printf("Done!\n");
        }
        else if (choice == 5){
            int index;
            printf("Enter which list you want to remove:");
            scanf("%d", &index);
            index++;
            remove_link(&head, index);
            printf("Done!\n");
        }
        else if (choice == 6){
            boss_finder(head);
            printf("Done!\n");
        }
        else if (choice == 7){
            test_remove_link();
        }
    }


}
