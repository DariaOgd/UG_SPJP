#include <stdio.h>
#include <math.h>
//Napisz program który wczyta od użytkownika parę liczb a,b i zwróci pierwszą liczbę c, taką że a do potęgi c jest większe od b.
int main(){
    int a,b;
    
    
    printf("Podaj dwie liczby\n");
    scanf("%d", &a);
    scanf("%d", &b);
    int i = 0;
    int x = 1;
    

    while(x < b ){
        x = a*i;
        
        printf("%d ", x);
        i++;
            
        
        
    }
    
    
}
