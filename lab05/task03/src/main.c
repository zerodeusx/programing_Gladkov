#include <stdio.h>
int main()
{
    int num = 243342;               //The number
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
    int sum1_2 = 0;
    int sum2_2 = 0;
    int sum1_3 = 0;
    int sum2_3 = 0;
    int remainder;
    int lucky;
    int lucky2;
    int lucky3;

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
        sum1      = sum1 + remainder;
        v         = v / 10;
    }

    v = second_part;                //For the while loop

    while (v != 0)                  //Getting the sum of second part
    {
        remainder = v % 10;
        sum2      = sum2 + remainder;
        v         = v / 10;
    }


    if (sum1==sum2 && len % 2 == 0){    //Finding out if its a lucky number or not
        lucky = 1;      //true
    }
    else if (sum1 != sum2 && len % 2 == 0) {
        lucky = 0;      //false
    }
    else if (len == 1){
        lucky = 0;      //false
    }





    for ( i = 0; ; i++){
        remainder = v % 10;
        sum1      = sum1 + remainder;
        v         = v / 10;
        if (v == 0){
            break;
        }
    }
    for ( i = 0; ; i++){
        remainder = v % 10;
        sum2_2      = sum2_2 + remainder;
        v         = v / 10;
        if (v == 0){
            break;
        }
    }

    if (sum1_2==sum2_2 && len % 2 == 0){    //Finding out if its a lucky number or not
        lucky2 = 1;      //true
    }
    else if (sum1_2 != sum2_2 && len % 2 == 0) {
        lucky2 = 0;      //false
    }
    else if (len == 1){
        lucky2 = 0;      //false
    }





    do {
        remainder = v % 10;
        sum1_3    = sum1_3 + remainder;
        v         = v / 10;
    }
    while(v != 0);


    do {
        remainder = v % 10;
        sum2_3    = sum2_3 + remainder;
        v         = v / 10;
    }
    while(v != 0);


    if (sum1_3==sum2_3 && len % 2 == 0){    //Finding out if its a lucky number or not
        lucky3 = 1;      //true
    }
    else if (sum1_3 != sum2_3 && len % 2 == 0) {
        lucky3 = 0;      //false
    }
    else if (len == 1){
        lucky3 = 0;      //false
    }

    return 0;
}