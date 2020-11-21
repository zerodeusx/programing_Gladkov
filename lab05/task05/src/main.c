#include <stdio.h>

int main() {
    int num = 64;               //Number

    int temp = 0;
    int temp2 = 0;
    int temp3 = 0;

    int root = 1;               //Initializing root
    int root2 = 1;
    int root3 = 1;

    int i, j = 1, k = 1;


    //finding root if it is possible, if not root stays 1 before the 23rd line
    for (i = 1; i < num; i ++) {
        temp = i * i;           //getting the square
        if (temp == num) {      //if square equals to number
            root = temp / i;
            break;
        }
        else if ( temp > num ){  //if temp (square) goes bigger than num
            break;
        }
    }

    if ((root*root) != num){
        root = 0; //cant calculate
    }


    while ( j < num){
        temp2 = j * j;           //getting the square
        if (temp2 == num) {      //if square equals to number
            root2 = temp2 / j;
            break;
        }
        else if ( temp2 > num ){  //if temp (square) goes bigger than num
            break;
        }
        j++;
    }
    if ((root2*root2) != num){
        root2 = 0; //cant calculate
    }


    do{
        temp3 = k * j;           //getting the square
        if (temp3 == num) {      //if square equals to number
            root3 = temp3 / k;
            break;
        }
        else if ( temp3 > num ){  //if temp (square) goes bigger than num
            break;
        }
        k++;
    } while ( k < num);

    if ((root3*root3) != num){
        root3 = 0; //cant calculate
    }

    return 0;
}
