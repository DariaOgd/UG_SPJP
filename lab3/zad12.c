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
int roznicaDat(int d1, int m1, int r1, int d2,int m2,int r2){
    int doKoncaRoku = liczbaDni(d1,m1,r1);

    int lata = r2-r1-1;
    int dni = 0;
    for(int i = 0; i < m2 ;i++){
        dni+= zad10(i, r2);

    }
    int wynik1 = dni +doKoncaRoku;
    

    if(lata == 1){
        return wynik1;
    }
    else if(lata > 1){
        if(czyPrzestepny(r2) == 1){
            int wynik2 = wynik1 + 365*lata; 
            return wynik2;

        }else if(czyPrzestepny(r2) == 0){
            int wynik3 = wynik1 + 366*lata; 
            return wynik3;
        }

    }
    return dni;

}

int main(){
    printf("%d \n", roznicaDat(3,10,2020,10,2,2023));



}