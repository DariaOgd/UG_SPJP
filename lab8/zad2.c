#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]= {1,2,3,4,5,6};

    FILE *file;
    file = fopen("parzyste.c", "w");

    for(int i =0; i < 7;i++){
        if(arr[i]%2==0){
            fprintf(file,"%d",arr[i]);
  
        }

    }
     fclose(file);




}