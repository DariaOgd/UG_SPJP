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

int liczbaDni(int d, int m, int r){
    int m1 = zad10(m,r);

    int dni = m1 - d;
    int mies = 12 - m-1;
    int wynik = dni + mies*dni;
    return wynik;
}

int main(){
    printf("%d \n", liczbaDni(3,10,2020));
}