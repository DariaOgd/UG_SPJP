#include <stdio.h>

int main(){
    int a,b;
    printf("Podaj liczbe\n");
    scanf("%d", &a);
    
    if(a < 128){
        printf("tak\n");
    }

    return 0;
}