#include <stdio.h>

int wczesniejsza(int d1, int m1, int r1, int d2, int m2,int r2){
    if(r2 > r1){
        return 1;

    }
    if(r1 > r2){
        return 2;
    }
    if(r1 == r2){
        if(m1 > m2){
            return 2;
        }
        if(m2 > m1){
            return 1;
        }
    }
    if(r1==r2 && m1 == m2){
        if(d1 > d2){
            return 2;
        }
        if(d2 > d1){
            return 1;
        }
    }
}

int main(){
    printf("%d \n", wczesniejsza(3,10,2020, 5,11,2021));
}