#include <stdio.h>
//Число
#define NUM 592

int main() {

    int x = NUM;


    int x1 = x/100;         //Перша цифра
    int ostatok1 = x%100;   //Залишок
    int x2 = ostatok1/10;   //Друга цифра
    int x3 = ostatok1%10;   //Третя цифра

    float pre_result;
    //У скiльки разiв бiльше
    pre_result = (float) x1/x3;


    float n3 = pre_result * 100.0; 		//перенос 2 цифр
    int pre_result2 = n3; 				//копiювання
    float result = pre_result2 / 100.0; //2 цифри пiсля коми

    return 0;

}
