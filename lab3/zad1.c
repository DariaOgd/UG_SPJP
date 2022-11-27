#include <stdio.h>
 int dodawanie(int a, int b){
    return a+b;

 };
  int odejmowanie(int a, int b){
    return a-b;

 };
 
  int mnozenie(int a, int b){
    return a*b;

 };
  int dzielenie(int a, int b){
    return a/b;

 };
 
 

int main(){
    
    int b;
    int a;
    int c;
    printf("Podaj dwie liczby: \n");
    scanf("%d %d", &a, &b);
    printf("Dodawanie -1 \n Odejmowanie -2 \n Mnożenie -3 \n Dzielenie -4 \n");
    scanf("%d ",&c);

    switch (c)
    {
    case 1:
        printf("%d \n", dodawanie(a,b));
        break;
    case 2:
        printf("%d", odejmowanie(a,b));
        break;
    case 3 :
        printf("%d", dzielenie(a,b));
        break;
    case 4:
        printf("%d", mnozenie(a,b));
        break;
    


    
    default:
        break;
    }

    


    
    return 0;
}
