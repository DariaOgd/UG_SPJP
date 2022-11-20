#include <stdio.h>

int main(){
    int a,b;
    int i,j;
    int res = 1;
    printf("Podaj dwie liczby\n");
    scanf("%d", &a);
    scanf("%d", &b);
    for(i=1; i<=a; i++){
        res = res * b;
        printf("%d \n" , res);
        
    }
    
}
