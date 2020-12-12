/**
 * @mainpage
 * # Загальне завдання
 * 1. **Переробити** програми, що були розроблені під час виконання лабораторних робіт з тем "Масиви" та "Цикли" таким чином, щоб 
 * використовувалися функції для обчислення результату.
 * 2. **Визначити** ци є рандомне число досконалим (якщо воно дорiвнює сумi cвоїх дiльникiв) за допомогою функцiї
 *
 * @author Gladkov K.
 * @date 08-dec-2020
 * @version 1.0
 */

/**
 * @file main.c
 * @brief генерація псевдовипадкового числа за допомогою rand()
 *
 */

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - генерування псевдовипадкових чисел за допомогою rand() 
 * - генерування заданого числа 
 * - @brief Обчислення результату за допомогою функції
 * {@link PerfectNumber}
 *
 * @return успішний код повернення з програми (0)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PerfectNumber(int function_num);

int main(){

    //Used for a dynamic random update
    srand(time(NULL));

    int x = 0;
    int y = 9000;

    int range_for_rand;
    int min_number_of_range;

    //Finding the range and the min number
    if ( x < y ){
        range_for_rand = y - x + 1;
        min_number_of_range = x;
    }
    else if ( x > y ){
        range_for_rand = x - y + 1;
        min_number_of_range = y;
    }

    //Potential lucky number N1
    int num1 = rand() % range_for_rand + min_number_of_range;

    //Potential lucky number N2
    int num2 = rand() % range_for_rand + min_number_of_range;
    

    int result1 = PerfectNumber(num1);
    int result2 = PerfectNumber(num2);
    
    return 0;
}
/**
 * Функція {@link PerfectNumber}
 *
 * Послідовність дій:
 * - цикл, де підсумовуються всі значення, при яких залишок ділення дорівнює 0 {@link sum_of_dividers}
 * - знаходження суми останніх трьох чисел різними циклами {@link sum_half2} 
 * - порівняння числа і суми відповідних подільників
 * @return 1 - число досконале, 0 - число не досконале
 */
int PerfectNumber(int function_num){

    int i;
    int sum_of_dividers = 0;       //Initializing sum

    int perfect = 0;


    for (i = 1; i < function_num; i++) {
        if (function_num % i == 0) {
            sum_of_dividers += i; //Getting all the i values which suit us and summing them in the result
        }
    }

    if (sum_of_dividers == function_num){
        perfect = 1; //true
    }
    
    return perfect;

}