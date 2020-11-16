#include <stdio.h>

int main()
{
    int num = 10;                   //Number
    int i;                          //Used in loop 
    int result = 0;                 //Initializing result


    for(i = 1; i <= num; i++) {     //Getting all the i values which suit us and summing them in the result
        if((num%i) == 0){
            result += i;
        }
    }



    return 0;
}