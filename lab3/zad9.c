#include <stdio.h>


int czyPrzestepny(int a){
    if(a%4 == 0 ){
        return 1;
    }
    else return 0;
}

void main(){
    printf("%d \n",czyPrzestepny(2010));
}