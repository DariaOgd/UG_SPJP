#include <stdio.h>

int main(){
    int a,b,c;
    printf("Podaj trzy liczby\n");
    scanf("%d %d %d", &a, &b , &c);
    
    if(a > b && a >c){
        if(a*a ==b*b+c*c){
            printf("Można\n");
        }else printf("Nie można\n");
    }
    if(b > a && b >c){
        if(b*b ==a*a+c*c){
            printf("Można\n");
        }else printf("Nie można\n");
    }
    if(c > a && c >b){
        if(c*c ==b*b+a*a){
            printf("Można\n");
        }else printf("Nie można\n");
    }
        


    return 0;
}