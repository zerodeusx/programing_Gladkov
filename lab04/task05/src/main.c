#include <stdio.h>

int main() {

    float X = 1.2;  //x value
    float y;        //y value   


    //Using our graph to find out Y if X < = -1
    if (X <= -1) {
    y = -X -1;      
    }

    //Using our graph to find out Y if X > -1 and X < = 0
    if (X > -1 && X <= 0) {
    y = X + 1; 
    }

    //Using our graph to find out Y if X > 0 and X < 1   
    if (X > 0 && X < 1) {
    y = -X + 1; 
    }

    //Using our graph to find out Y if X >= 0
    if (X >= 1) {
    y = X - 1; 
    }

    return 0;

}