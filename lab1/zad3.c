#include <stdio.h>

int main(){
    int a,b;
    printf("Podaj dwie liczby\n");
    scanf("%d %d", &a, &b);
    
    if(a > b){
        printf("%d\n", a);
    }else printf("%d\n", b);

    return 0;
}