#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void word_amount (char strIn[]);

int main() {

    //Used for a dynamic random update
    srand(time(NULL));

    //random range
    int x = 32;
    int y = 39;

    int range_for_rand;
    int min_number_of_range;

    //Finding the range and the min number
    if ( x < y ){
        range_for_rand = y - x + 1;
        min_number_of_range = x + 1;
    }
    else if ( x > y ){
        range_for_rand = x - y;
        min_number_of_range = y;
    }

    int arr_length = 55;

    char strIn[arr_length];  //Phrase

    for (int i; i < arr_length; i++ ){
        strIn[i] = rand () % range_for_rand + min_number_of_range;
    }

    char strIn2[arr_length]; //Phrase2

    for (int i; i < arr_length; i++ ){
        strIn2[i] = rand () % range_for_rand + min_number_of_range;
    }

    word_amount(strIn);
    word_amount(strIn2);

    return 0;
}

void word_amount (char strIn[]){

    int len = 0;                //aray length
    int count = 0;              //initializing amount of words

    for (int i = 0; ; i++) {    //finding array's length
        if (strIn[i] == '\0') {
            break;
        } else {
            len++;
        }
    }

    //finding the amount of words
    for (int i = 0; i < len; i++) {
        if (strIn[i] != ' ' && (strIn[i + 1] == ' ' || strIn[i + 1] == '\0')) {
            count++;
        }
    }

}