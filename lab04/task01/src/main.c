#include <stdio.h>
#define R 4.0
#define Pi 3.14

int main()
{
    char l = "l";           //chars required for choice
    char s = "s";
    char v = "v";

    float l_math;           //All math variables
    float s_math;
    float v_math;
    float R2;               //R**2
    float R3;               //R**3

    char choice;
    choice = v;             //choosing our result 

    R2 = R*R;
    R3 = R2*R;

    l_math = 2*Pi*R;        //Formula  =  2 * Pi * R

    s_math = Pi*R2;         //Formula  = Pi * R**2

    v_math = 4/3*Pi*R3;     //Foruma  =  4/3 * Pi * R**3



    //If statement for different choice
    if ( choice  == l ){    
        l_math = 2*Pi*R;
    }
    else if ( choice  == s ){
        s_math = Pi*R2;
    }
    else if ( choice  == v ){
        v_math = 4/3*Pi*R3;
    }
    else {

    }


    return 0;
}