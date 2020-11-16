#include <stdio.h>

int main() {

    int a = 5;

    int a2 = a*a;                       //В квадраті

    //a y четвертій
    int a4 = a2*a2;                     //a*a= a2, a2*a2=a4


    //a у шостiй
    int a3 = a2*a;                      //a2 = a*a, a2*a=a3, a3*a3=a6
    int a6 = a3*a3;


    //a у восьмiй
    int a8 = a4*a4;                     //a*a=a2, a2*a2=a4, a4*a4=a8


    //a y десятiй
    int a5 = a4*a;                      //a*a=a2, a2*a2=a4, a4*a=a5, a5*a5=a10
    int a10 = a5*a5;

    return 0;

}
