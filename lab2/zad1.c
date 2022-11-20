#include <stdio.h>

int main(){
    int n,i;
    int sum = 0;
    printf("Podaj liczbę\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        sum+=i*i;
        printf("%d \n" , sum);
    }
}
