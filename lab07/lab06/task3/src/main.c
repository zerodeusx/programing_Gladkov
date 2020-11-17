#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void num_converter(int num, int NUM);

int main() {

    //Used for a dynamic random update
    srand(time(NULL));

    //Random range
    int x = 0;
    int y = 10000;

    int range_for_rand;
    int min_number_of_range;

    //Finding the range and the min number
    if ( x < y ){
        range_for_rand = y - x;
        min_number_of_range = x;
    }
    else if ( x > y ){
        range_for_rand = x - y;
        min_number_of_range = y;
    }

    //first time
    int num = rand() % range_for_rand + min_number_of_range;
    int NUM = num;

    //second time
    int num2 = rand() % range_for_rand + min_number_of_range;
    int NUM2 = num2;
    
    num_converter(num, NUM);
    num_converter(num2, NUM2);

    return 0;
}

void num_converter(int num, int NUM){

    char numAsString[50] = {0};	//Resulting array
    short size = 0;

    //Initializing the needed numerical places
    char thousand[10] = {' ','t','h','o','u','s','a','n','d',' '};
    char hundred[9] = {' ','h','u','n','d','r','e','d',' '};
    char decade[8] = {' ','d','e','c','a','d','e',' '};

    //Initializing the number arrays
    char one[3] = {'o','n','e'};
    char two[3] = {'t','w','o'};
    char three[5] = {'t','h','r','e','e'};
    char four[4] = {'f','o','u','r'};
    char five[4] = {'f','i','v','e'};
    char six[3] = {'s','i','x'};
    char seven[5] = {'s','e','v','e','n'};
    char eight[5] = {'e','i','g','h','t'};
    char nine[4] = {'n','i','n','e'};
    int cond = 0;

    //Finding the length of our number
    for (int i = 10000; i > 0; i /= 10) {
        if (num > 0) {
            cond = num % i;
            if (cond != num) {
                size++;
            }
            num %= i;
        }
    }

    num = NUM;
    int iStart = 0;

    //Getting the needed value for the 4-digit number
    if (size == 4) {
        num = NUM / 1000;
        switch (num) {
            case 1:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = one[t];
                    iStart++;
                }
                break;
            case 2:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = two[t];
                    iStart++;
                }
                break;
            case 3:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = three[t];
                    iStart++;
                }
                break;
            case 4:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = four[t];
                    iStart++;
                }
                break;
            case 5:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = five[t];
                    iStart++;
                }
                break;
            case 6:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = six[t];
                    iStart++;
                }
                break;
            case 7:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = seven[t];
                    iStart++;
                }
                break;
            case 8:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = eight[t];
                    iStart++;
                }
                break;
            case 9:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = nine[t];
                    iStart++;
                }
                break;
        }
        //Adding our digit
        for (int th = 0; th < 10; th++, iStart++) {
            numAsString[iStart] = thousand[th];
        }

        size--;
        num = NUM % 1000;
    }

    //Getting the needed value for the 3-digit number
    if (size == 3) {
        num = num / 100;
        switch (num) {
            case 0:
                break;
            case 1:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = one[t];
                    iStart++;
                }
                break;
            case 2:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = two[t];
                    iStart++;
                }
                break;
            case 3:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = three[t];
                    iStart++;
                }
                break;
            case 4:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = four[t];
                    iStart++;
                }
                break;
            case 5:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = five[t];
                    iStart++;
                }
                break;
            case 6:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = six[t];
                    iStart++;
                }
                break;
            case 7:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = seven[t];
                    iStart++;
                }
                break;
            case 8:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = eight[t];
                    iStart++;
                }
                break;
            case 9:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = nine[t];
                    iStart++;
                }
                break;
        }
        for (int h = 0; h < 9; h++, iStart++) {
            numAsString[iStart] = hundred[h];
        }
        size--;
        num = NUM % 100;
    }

    //Getting the needed value for the 2-digit number
    if (size == 2) {
        num = num / 10;
        switch (num) {
            case 0:
                break;
            case 1:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = one[t];
                    iStart++;
                }
                break;
            case 2:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = two[t];
                    iStart++;
                }
                break;
            case 3:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = three[t];
                    iStart++;
                }
                break;
            case 4:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = four[t];
                    iStart++;
                }
                break;
            case 5:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = five[t];
                    iStart++;
                }
                break;
            case 6:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = six[t];
                    iStart++;
                }
                break;
            case 7:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = seven[t];
                    iStart++;
                }
                break;
            case 8:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = eight[t];
                    iStart++;
                }
                break;
            case 9:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = nine[t];
                    iStart++;
                }
                break;
        }

        //Adding the prev value
        for (int d = 0; d < 8; d++, iStart++) {
            numAsString[iStart] = decade[d];
        }
        size--;
    }

    //Getting the needed value for the 1-digit number
    if (size == 1) {
        num = NUM % 10;
        switch (num) {
            case 0:
                break;
            case 1:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = one[t];
                    iStart++;
                }
                break;
            case 2:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = two[t];
                    iStart++;
                }
                break;
            case 3:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = three[t];
                    iStart++;
                }
                break;
            case 4:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = four[t];
                    iStart++;
                }
                break;
            case 5:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = five[t];
                    iStart++;
                }
                break;
            case 6:
                for (int t = 0; t < 3; t++) {
                    numAsString[iStart] = six[t];
                    iStart++;
                }
                break;
            case 7:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = seven[t];
                    iStart++;
                }
                break;
            case 8:
                for (int t = 0; t < 5; t++) {
                    numAsString[iStart] = eight[t];
                    iStart++;
                }
                break;
            case 9:
                for (int t = 0; t < 4; t++) {
                    numAsString[iStart] = nine[t];
                    iStart++;
                }
                break;
        }
        //End of our resulting array
        numAsString[iStart] = '\0';
        
    }



}