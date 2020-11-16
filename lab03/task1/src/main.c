#include <stdio.h>

int main()
{
    //Данi
    float r1 = 10.2;
    float r2 = 2.4;
    float r3 = 3.1;
    float x;
    float x1;
    float r;

    //Чисельник
    x = r1 * r2 * r3;

    //Знаменник
    x1 = r2 * r3 + r1 * r3 + r1 * r2;

    //Вiдповiдь
    r = x/x1;

    return 0;
}