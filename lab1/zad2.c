#include <stdio.h>

int main(){
    int a,b;
    printf("Podaj dwie liczby\n");
    scanf("%d %d", &a, &b);
    int odejmowanie = a-b;
    int dodawanie = a+b;
    int mn = a*b;
    int modulo = a%b;


    printf("Wynik odejmowania to %d\n", odejmowanie);
    printf("Wynik dodawania to %d\n", dodawanie);
    printf("Wynik mnożenia to %d\n", mn);
    printf("Wynik modulo to %d\n", modulo);
    

    return 0;
}