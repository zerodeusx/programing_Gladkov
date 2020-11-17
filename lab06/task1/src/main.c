#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 15

void centralizer(int zap, char strIn[]);

int main() {

    //Used for a dynamic random update
    srand(time(NULL));

    //random range
    int x = 97;
    int y = 122;

    int range_for_rand;
    int min_number_of_range;

    //Finding the range and the min number
    if ( x < y ){
        range_for_rand = y - x + 1;
        min_number_of_range = x;
    }
    else if ( x > y ){
        range_for_rand = x - y + 1;
        min_number_of_range = y;
    }


    int zap = '_';                           //For filling (filler)

    const int array_length = 6;
    char strIn[array_length];                //String we use inside our fill


    int i;

    //Generating random elements
    for (i = 0; i < array_length; i++){
        strIn[i] = rand() % range_for_rand + min_number_of_range;
    }
    strIn[array_length] = '\0';


    char strIn2[array_length];
    for (i = 0; i < array_length; i++){
        strIn2[i] = rand() % range_for_rand + min_number_of_range;
    }
    strIn2[array_length] = '\0';

    centralizer(zap, strIn);
    centralizer(zap, strIn2);

    return 0;
}

void centralizer(int zap, char strIn[]){

    char strResult[LEN];

    int lenIn = 0;

    for (int i = 0; ; i++) {        //Finding the array size
        if (strIn[i] == '\0') {
            break;
        } else if (strIn[i] != 0) {
            lenIn++;
        }
    }

    int lenZap = LEN - lenIn - 1;   //Amount of total fills

    int halfLenZap = lenZap / 2;    //Amount of fill before string


    for (int i = 0; i < halfLenZap; i++) {                            //Putting in the starting fills
        strResult[i] = zap;
    }

    for (int i = halfLenZap; i < (halfLenZap + lenIn);) {             //Putting in the string
        for (int j = 0; j < lenIn; j++) {
            strResult[i] = strIn[j];
            i++;
        }
    }

    for (int i = (halfLenZap + lenIn); i < LEN - 1; i++) {            //Putting in the end fills
        strResult[i] = zap;
    }

    //Task requirement
    if (lenIn % 2 == 0){
        strResult[LEN - 1] = '\0';
    }                                            
    if (lenIn % 2 == 1){
        strResult[LEN - 2] = '\0';
    }


}