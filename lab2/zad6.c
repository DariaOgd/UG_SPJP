//Napisz program który dla podanej tablicy dwówymiarowej o wartościach 0 lub 1, wypisze na ekranie prostokąt o wymiarach zależnych od wymiarów tablicy. 
//Na współrzędnych odpowiadającym wartości 1 umieść znak 'x'
#include <stdio.h>

int main(){
    int i, j ;
    int arr[2][2] = {{1,0},{0,1}};

 
    for(i = 0; i<= 2; i++){
        if(i == 0){
            printf("--\n");
        }
        if(i== sizeof(arr)/sizeof(arr[0])){
            printf("--\n");
        }

       // printf("--\n");
        if(arr[i][0] == 1){
                printf("|1x|\n" );
            }
        if(arr[i][1] == 1){
                printf("|x1|\n");
            }

    }

 }

    

