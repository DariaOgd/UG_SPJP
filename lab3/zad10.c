#include <stdio.h>

int czyPrzestepny(int a){
    if(a%4 == 0 ){
        return 1;
    }
    else return 0;
}
int zad10(int m, int r){
    if(m%2 != 0){
        return 31;
    }
    else if(m%2 == 0 && m!= 2){
        return 30;
    }
    else if(m==2){
        if(czyPrzestepny(r) == 0){
            return 29;
        }
        else if(czyPrzestepny(r) == 1){
            return 28;
        }
    }
}

int main(){
    printf("%d \n" , zad10(3,2020));
}