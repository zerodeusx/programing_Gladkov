#include <stdio.h>

int main() {
    int num = 64;               //Number
    int temp = 0;               
    int root = 1;               //Initializing root

    while (temp != root){       //Loop for getting the root, if it exists
        temp = num/root;
        if(temp == root){
            break;
        }
        if (root == num){
            break;
        }
        root++;
    }

    int result = -1;            //If exists
    if ((root*root) == num){
        result == root;
    }
                    

    return 0;
}
