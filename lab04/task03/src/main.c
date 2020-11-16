#include <stdio.h>

int main() {

    int k, m, n, temp; //variables

    k = 10;
    m = 2;
    n = 5;

    if (k>m){                   //First if (k>m)
    temp = k;
    k = m;
    m = temp;
        if(k>n){
            temp = k;
            k = n;
            n = temp;
            temp = m;
            m = n;
            n = temp;
        }
        else if (n>k && n>m){
        }
        else {
            temp = m;
            m = n;
            n = temp;
        }

    }

    else if (k<m){              //Second if (k<m)
        if (k<n && m<n){
        }
        else if (k>n && m>n) {
            temp = k;
            k = n;
            n = temp;
            temp = 0;

            temp = m;
            m = n;
            n = temp;
        }
        else{
            temp = m;
            m = n;
            n = temp;
        }
    }



return 0;

}
