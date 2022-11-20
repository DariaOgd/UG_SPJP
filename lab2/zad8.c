//Napisz program który dla podanej pary liczb a,b zwróć b liczb pierwszych większych lub równych a.

#include <stdio.h>
int main(){

int j = 2;
 int a = 5;

 int b = 8;

 while(b>=0){
    
    
    if(a%j!=0){
        printf("%d  \n ",  a);
        
        b--;
        a++;
        
        //a++;


    }
    j++;
    a++;

 }



 }


    



