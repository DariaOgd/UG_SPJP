#include <stdio.h>

int main(){
    int a;
    int counter = 0;
    int liczba = 5;
    printf("Odgadnij liczbe od 1-5 \n");
    scanf("%d", &a);
    
   
   if(a!=liczba && counter !=4){
    counter++;
    liczba=liczba-a;
    printf("Nie zgadłes, spróbuj jeszcze raz");
    scanf("%d", &a);

    if(a!=liczba && counter !=4){
    counter++;
    liczba=liczba-a;
    printf("Nie zgadłes, spróbuj jeszcze raz");
    printf(counter);
    scanf("%d", &a);

    if(a!=liczba && counter !=4){
    counter++;
    liczba=liczba-a;
    printf("Nie zgadłes, spróbuj jeszcze raz");
    scanf("%d", &a);
    if(counter==4){
        printf("Liczba to\n");
        
    }
   }
   } 
   }
    
   }

