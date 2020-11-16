#include <stdio.h>

int main() {
    int X;
    int y;

    if (X<=-1) {                    //x is less than -1
        y=-1/X;
    }

    else if (X<=1 && X>=-1) {       //x is between -1 and 1
        y=X*X;
    }

    else if (X>=1) {                //x is more than 1
        y=1;
    }
    
    else{                           //Test
    }

    return 0;
}