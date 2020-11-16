#include <stdio.h>

int main()
{
    int n1, n2, i, div; //variables

    n1 = 25;
    n2 = 20;

    int x = 1;

    do{ //do-while loop

        x++;

        for(i=1; i <= n1 && i <= n2; ++i)
        {
            //Finds the common divisor
            if(n1%i==0 && n2%i==0)
                div = i;
        }


    }
    while ( x < 2);
    
    return 0;
}