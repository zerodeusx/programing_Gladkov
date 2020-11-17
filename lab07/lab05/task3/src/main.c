#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int LuckyNum(int num);              

int main(){

    //Used for a dynamic random update
    srand(time(NULL));

    int x = 100000;
    int y = 999999;

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

    //Potential lucky number N1
    int num1 = rand() % range_for_rand + min_number_of_range;  

    //Potential lucky number N2
    int num2 = rand() % range_for_rand + min_number_of_range;               

    int result1 = LuckyNum(num1);
    int result2 = LuckyNum(num2);

    return 0;
}

int LuckyNum(int num){
    int num_copy = num;             //It's copy for the loop

    int i;                          //For loop

    int len = 1;                    //Lenth of number (starting at 1)
    int half_len = 0;               //Half length

    int for_divsion = 10;           //Used for the division

    int first_part;                 //First part of number
    int second_part;                //Second part of number

    int v;                          //All those vars are used to get the sum of the parts
    int sum1 = 0;
    int sum2 = 0;
    int remainder;
    int lucky = 1;

    for (i = 0; i <= 12; i++) {     //Getting the length
        num_copy/=10;

        if (num_copy > 1){
            len++;
        }
        else {
            lucky = 0;
        }

    }

    if (len%2==0){                  //Finding out if its possible to get the first and second part
        half_len = len/2;           //Getting the half, if length suits us
    }
    else{
        lucky = 0;
    }

    for (i=1; i < half_len; i++) {  //Getting the for_division variable we need
        for_divsion *= 10;

    }


    first_part = num / for_divsion;     //First part
    second_part = num % for_divsion;    //Second part


    v = first_part;                 //For the while loop

    while (v != 0)                  //Getting the sum of first part
    {
        remainder = v % 10;
        sum1 = sum1 + remainder;
        v = v / 10;
    }

    v = second_part;                //For the while loop

    while (v != 0)                  //Getting the sum of second part
    {
        remainder = v % 10;
        sum2 = sum2 + remainder;
        v = v / 10;
    }


    if (sum1==sum2 && len % 2 == 0){    //Finding out if its a lucky number or not and printing it out
        lucky;
    }
    else if (sum1 != sum2 && len % 2 == 0) {
        lucky = 0;
    }
    else if (len == 1){
        lucky = 0;
    }

    return lucky; 


}