#include "lib.h"

void repeat_deleter(char names[]){

    int max_am_of_words = 7;
    int max_size_of_word = 10;
    int i,l;
    int j = 0, k = 0;

    char array_of_words[max_am_of_words][max_size_of_word];

    for (i = 0; names[i] != '\0'; i++){

        if (names[i] == 44){

            array_of_words[k][j] = '\0';
            k ++;//amount of words (but less for 1)
            j = 0;

        }

        else{

            array_of_words[k][j] = names[i];
            j ++;

        }

    }


    //nullyfying J
    j = 0;


    //comparing our words
    for (i = 0; i < k; i++){

        for (l = 0; l < k + 1; l++){

            if (array_of_words[l][j] == '\0' || l == i){

                continue;
            }

            if (strcmp (array_of_words[i], array_of_words[l]) == 0) {

                array_of_words[l][j] = '\0';
            }
        }

    }

    j = 0;


    //printing out the words
    for (i = 0; i < k + 1; i++){

        if (array_of_words[i][j] == '\0') {

            continue;
        }
        else {

            printf("%s ", array_of_words[i]);
        }
    }




}