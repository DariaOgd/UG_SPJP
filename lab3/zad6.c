#include <stdio.h>

int zad5(int a1, int b1, int a2, int b2){
    int res[2];
    if(a1 < a2 && b1 > b2){
        
        res[0] = a2;
        res[1] = b2;
        //printf("%i %i", a2,b2);
        return b2;
    }
    else if(a1 < a2 && b1 < b2){
       // printf("%i %i", a2,b1);
        res[0] = a2;
        res[1] = b1;
        return b1;
    }
    else if(a1 > a2 && b1 < b2){
        //printf("%i %i", a1,b1);
        res[0] = a1;
        res[1] = b1;
        return b1;
    }
    else return -1;
    

    

}
void main(){
    printf("%d \n", zad5(1,5,2,4));
}