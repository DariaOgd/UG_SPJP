//Napisz program który przepiszę tablicę trójwymiarową na tablicę jednowymiarową. 
//Zastanów się nad numeracją elementów w nowej tablicy.
#include <stdio.h>
int main(){
    int i,j;
    int a = 3;
    int x = 0;
int arr[3][3] = {{1,3,2},{3,2,1},{1,4,2}};
int arr2[a*a];
for(i = 0; i < 3; i ++){
    
    for(j = 0; j <3; j++){
        if( i = 0){
            arr2[i*j+j] = arr[i][j];
        }
        if( i =1){
            arr2[(i*j+1)+j*2] = arr[i][j];
        }
        if( i =2){
            arr2[(i*j+2)+j*3] = arr[i][j];
        }
        
         
         
       
    }
}
printf("--------------\n");
for(i = 0; i < 9 ; i++){
    printf("%d \n", arr2[i]);
}

    
}
