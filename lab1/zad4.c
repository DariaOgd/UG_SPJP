#include <stdio.h>

int main(){
    int a,b,c;
    printf("Podaj trzy liczby\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b && a >c){
        printf("%d\n", a);
    }else if(b>c && b>a){
        printf("%d\n", b);

    }
    else if(c>b && c>a){
        printf("%d\n", a);

    }
    

    return 0;
}