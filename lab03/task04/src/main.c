#include <stdio.h>
#define num 3720  	//4-розрядне число 
#define p 8			//система числення 	

int main() {
    int x = num; 

    //Для переказу необхідно помножити розряд числа на відповідну йому ступінь розряду
    int x1 = x/1000;                //Перша цифра в числі
    int ostatok = x%1000;           //Залишок
    int x2 = ostatok/100;           //Друга цифра в числi
    int ostatok2 = ostatok%100;     //Другий залишок
    int x3 = ostatok2/10;           //Третя цифра в числi
    int x4 = ostatok2%10;           //Четверта цифра в числi

    //Еквiвалент
    int y = p*p*p*x1 + p*p*x2 + p*x3 + 1*x4; 

    return 0;
}
