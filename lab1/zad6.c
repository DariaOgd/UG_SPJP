#include <stdio.h>

int main(){
    int a;
    printf("Podaj rok\n");
    scanf("%d", &a);
    
    if(a %4 == 0){
        if(a%100 ==0){
            if(a%400){
                printf("Rok przestępny\n");
            }
            else printf("Rok nieprzestępny\n");
        }
        else printf("Rok nieprzestępny\n");
    }else printf("Rok nieprzestępny\n");

    return 0;
}