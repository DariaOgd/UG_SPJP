#include <stdio.h>

int main(){
    int a,b,c;
    printf("Podaj trzy liczby\n");
    scanf("%d %d %d", &a, &b , &c);
    
    if(a > b && a >c){
        int suma = b+c;
        if(a < suma){
            printf("Można utworzyć trójkąt");
        }else printf("Nie można utworzyć trójkąta");
    }
    if(b > a && b >c){
        int suma = a+c;
        if(b < suma){
            printf("Można utworzyć trójkąt");
        }else printf("Nie można utworzyć trójkąta");
    }
    if(c > b && c >a){
        int suma = a+c;
        if(c < suma){
            printf("Można utworzyć trójkąt");
        }else printf("Nie można utworzyć trójkąta");
    }

    return 0;
}