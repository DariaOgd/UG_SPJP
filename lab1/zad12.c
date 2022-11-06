#include <stdio.h>

int main(){
    int a,b;
    printf("Podaj liczbe\n");
    scanf("%d", &a);
    
    int i;

  for (i = 2; i < 6; i++)
  {
    if(a%i ==0){
        printf("%d \n", i);
        break;
    }
    else if(i==5){
         printf("Żadna nie jest podzielna\n");
    }
    
    
  }
  

    return 0;
}