#include <stdio.h>

int main() {
    int num = 64;               //Number
    int temp = 0;
    int root = 1;               //Initializing root
    int i;

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

    int result = root;
    
    return 0;
}
