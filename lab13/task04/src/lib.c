#include "lib.h"

void number_printer(char s[]){

    int i = 0;

    while (s[i]!='\0') {
        //if our index is a word (ascii table) printing it out
        if (s[i] >= '0' && s[i] <= '9')
            printf ( "%c", s[i]);
            //printing a space here
        else if (s[i+1] >= '0' && s[i+1] <= '9')
            printf( " " );
        i++;
    }

}