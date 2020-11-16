#include <stdio.h>

#define NUM 123.656

int main() {

    int first_part = NUM; 				  //Отримали 123
    float second_part = NUM - first_part; //Отримали 656
    float result;

    if (second_part == 0) {
        result = -1;	//Помилка
    }
    second_part = second_part * 1000;

    result = second_part / first_part; 	//Дiлення частей
    result = result * 100;
    result = (int) result * 1;         	//Щоб "округлити" до 2 знакiв.
    result = result / 100;				//Повертаємо назад	

    return 0;
}