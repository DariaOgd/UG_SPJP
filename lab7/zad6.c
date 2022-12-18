#include <stdio.h>
int tab[] = {1,2,11,21,33};
int main(){

    
    int *wsk = tab;
    
     int *p = (int *)(&tab + 1) - 1;

     //printf("%p \n", p);

     int *p2;
     p2 = wsk;

    zad6(p, p2);

    
}




int zad6(int* p, int* p2){
    int i;
    int x = (p2 - p)*(-1)+1;

        for(i = 1; i < x+1 ;i++){
        *(tab+i) = i;
       // printf(" %d \n", *(tab+i));
    }

    for(i = 0; i< x+1; i++){
        printf("%d \n", *(tab+i));
    }


}