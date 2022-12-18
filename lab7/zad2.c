#include <stdio.h>


int main(){
    int tab[5];
    int i;
    int x;
    printf("Podaj 5 liczb");

    for( i=0; i < 5; i ++){
        scanf("%d", tab+i);
        

    }

    for(i = 0; i < 5; i++){
        printf(" %d \n", *(tab+i));
    }


 
}