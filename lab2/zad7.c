//Napisz program który dla podanej liczby n sprawdź czy n jest liczbą pierwszą.
#include <stdio.h>
int main(){
 int n = 0;
 int i;
 int liczba = 10;

 for(i = 2; i <liczba; i++){
    
    if(liczba % i == 0){
        printf(" Nie pierwsza : %d\n", liczba % i);
        break;
    }else printf(" Pierwsza \n");break; 

 } 


    
}



