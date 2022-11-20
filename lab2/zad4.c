#include <stdio.h>
//Napisz program który dla zadanej tablicy liczb stworzy i zwróci tablicę kwadratów tych liczb.

int main(){
 int arr[3] = {1,2,3};
 int i;
 for(i = 0; i < sizeof(arr)/sizeof(arr[0]);i++){
    arr[i] = arr[i]*arr[i];
    //printf("%d \n", arr[i] );


 }
printf("%d \n", arr[2] );
 
    
}
