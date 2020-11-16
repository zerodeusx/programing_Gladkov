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
    int remainder;
    int lucky = 1;
    int unlucky = 0;

    for (i = 0; i <= 12; i++) {     //Getting the length
        num_copy/=10;

        if (num_copy > 1){
            len++;
        }
        else {
            unlucky;
        }

    }

    if (len%2==0){                  //Finding out if its possible to get the first and second part
        half_len = len/2;           //Getting the half, if length suits us
    }
    else{
        unlucky;
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
        sum1       = sum1 + remainder;
        v         = v / 10;
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
        unlucky;
    }
    else if (len == 1){
        unlucky;
    }


    return 0;
}