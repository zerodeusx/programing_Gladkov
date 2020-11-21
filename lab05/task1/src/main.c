#include <stdio.h>

int main()
{
    int n1, n2, i; //variables
    int div1, div2, div3;
    n1 = 25;
    n2 = 20;

    if (n2 > n1){
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    int x = 1;
    int j = 1;

    for(i=1; i <= n1 && i <= n2; ++i){
        //Finds the common divisor
        if(n1%i==0 && n2%i==0){
            div1 = i;
        }

    }

    do{
        if(n1%x==0 && n2%x==0){
            div2 = x;
        }
        x++;
    }
    while ( x < n2);

    while (j < n2){
        if(n1%j==0 && n2%j==0){
            div3 = j;
        }
        j++;
    }


    return 0;
}