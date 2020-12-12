/**
 * @mainpage
 * # Загальне завдання
 * 1. **Переробити** програми, що були розроблені під час виконання лабораторних робіт з тем "Масиви" та "Цикли" таким чином, щоб 
 * використовувалися функції для обчислення результату.
 * 2. **Реалізувати** функцію, яка перетворює задане число у рядок
 *
 * @author Gladkov K.
 * @date 08-dec-2020
 * @version 1.0
 */

/**
 * @file main.c
 * @brief запис в масив всіх отриманих розрядів і чисел за допомогою знаходження їх значення
 *
 */
 
 
/**
 * Головна функція.
 
 * Послідовність дій:
 * {@link arr[50]}
 * - заповнення результуючого масиву за допомогою функції
 * - {@link num_converter(arr, numIn)}
 * - виклик функції для генерування псевдовипадкових чисел 
 * - генерування заданого числа 
 * - заповнення заданого масиву
 * 
 * {@link copyOne} функція заповнює результуючий масив
 *
 * {@link copyNum} запис числа
 *
 * {@link num_converter} запис розряду числа
 * 
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int copyOne(char numAsString[], int iStart, char numStr[], int size) {/** < масив переписує розряд або чіслiвнік в наш результуючий масив */
    for (int t = 0; t < size; t++) {
        numAsString[iStart] = numStr[t];
        iStart++;
    }
    return iStart;
}

int copyNum(int num, char numAsString[], int iStart) { /** < записуємо в результуючий масив потрібні на елементи в залежності від значення числа */
    char one[3] = {'o','n','e'};
    char two[3] = {'t','w','o'};
    char three[5] = {'t','h','r','e','e'};
    char four[4] = {'f','o','u','r'};
    char five[4] = {'f','i','v','e'};
    char six[3] = {'s','i','x'};
    char seven[5] = {'s','e','v','e','n'};
    char eight[5] = {'e','i','g','h','t'};
    char nine[4] = {'n','i','n','e'};
    switch (num) {
        case 1:
            iStart = copyOne(numAsString, iStart, one, 3);
            break;
        case 2:
            iStart = copyOne(numAsString, iStart, two, 3);
            break;
        case 3:
            iStart = copyOne(numAsString, iStart, three, 5);
            break;
        case 4:
            iStart = copyOne(numAsString, iStart, four, 4);
            break;
        case 5:
            iStart = copyOne(numAsString, iStart, five, 4);
            break;
        case 6:
            iStart = copyOne(numAsString, iStart, six, 3);
            break;
        case 7:
            iStart = copyOne(numAsString, iStart, seven, 5);
            break;
        case 8:
            iStart = copyOne(numAsString, iStart, eight, 5);
            break;
        case 9:
            iStart = copyOne(numAsString, iStart, nine, 4);
            break;
    }
    return iStart;
}


void num_converter(char numAsString[], int num) {/** < Заповнюємо масив розрядами чисел */

    int NUM = num;
    short size = 0;

    char thousand[10] = {' ','t','h','o','u','s','a','n','d',' '};
    char hundred[9] = {' ','h','u','n','d','r','e','d',' '};
    char decade[8] = {' ','d','e','c','a','d','e',' '};
    int cond = 0;

    for (int i = 10000; i > 0; i /= 10) { /** < тут визначається розряд числа */
        if (num > 0) {
            cond = num % i;
            if (cond != num) {
                size++;
            }
            num %= i;
        }
    }

    num = NUM;
    int iStart = 0;

    if (size == 4) {
        num = NUM / 1000;
        iStart = copyNum(num, numAsString, iStart);
        iStart = copyOne(numAsString, iStart, thousand, 10);
        size--;
        num = NUM % 1000;
    }
    if (size == 3) {
        num = num / 100;
        iStart = copyNum(num, numAsString, iStart);
        iStart = copyOne(numAsString, iStart, hundred, 9);
        size--;
        num = NUM % 100;
    }

    if (size == 2) {
        num = num / 10;
        iStart = copyNum(num, numAsString, iStart);
        iStart = copyOne(numAsString, iStart, decade, 8);
        size--;
    }

    if (size == 1) {
        num = NUM % 10;
        iStart = copyNum(num, numAsString, iStart);
        numAsString[iStart] = '\0';
    }
}

int main() {
    char arr[50] = {0}; /*цей масив змінюється і в нього записується все*/

    int x = 0;
    int y = 10000;

    int range_for_rand;
    int min_number_of_range;

    //Finding the range and the min number
    if ( x < y ){
        range_for_rand = y - x + 1;
        min_number_of_range = x + 1;
    }
    else if ( x > y ){
        range_for_rand = x - y;
        min_number_of_range = y;
    }


    int number;

    number = rand () % range_for_rand + min_number_of_range;

    num_converter(arr, number);
    return 0;
}