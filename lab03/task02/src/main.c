#include <stdio.h>

int main() {
    int x = 321;

    //Перше цифра з нашого числа
    int first_digit = x/100;

    //Залишок
    int ostatok = x%100;

    //Друга цифра з нашого числа
    int second_digi = ostatok/10;
    //Остання цифра
    int last_digit = ostatok%10;

    //Міняємо місцями цифри
    int otvet = last_digit*100 + second_digi*10 + first_digit;


    return 0;
}
