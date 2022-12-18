#include <stdio.h>


int main(){
    int tab = 5; 
    int i;

    int liczby[] = {2,44,10,18,2};

    // int *wsk  = liczby;
    // int max = *wsk;
    // // printf(" %d ", *wsk+);

    // for(i = 0; i < 5; i++){

    //     if(*(liczby +i) > max+i){
    //         max = *(liczby+i);
    //     }
        
    // }

    // printf(" %d \n", max);

    max(liczby, 5);






}

int max(int liczby[], int i){


    int *wsk  = liczby;
    int max = *wsk;
    // printf(" %d ", *wsk+);

    for(i = 0; i < 5; i++){

        if(*(liczby +i) > max+i){
            max = *(liczby+i);
            *(liczby+i) = 0;
            
        }
        
    }

    printf(" %d \n", max);
    return max;


}