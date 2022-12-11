#include <stdio.h>

int i = 0;
int zad7(int a[5], int b){
    if(a[i] == b){
        printf("liczba: %d jest na indeksie %d \n", b,i );
        return i;
    }
    if( i == 5){
        printf("brak liczby");
        return -1;
    }
    else{
        i++;
    
     return zad7(a, b);
    }
    
    
    
    
}


int main()
{
    
    //printf(" %d, \n", zad7({1,2,3,4,5}, 5))
    int arr[5] = {1,2,35,46,89};

    printf(" %d \n", zad7(arr, 46));


    return 0;
}
