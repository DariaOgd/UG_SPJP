#include <stdio.h>

int i = 1;
int zad6(int a){
    if(a  == 1){
        return i;
    }
    else {
        
        i +=a%10;
        zad6(a/10);
    }

    
}


int main()
{
    

    printf("%d \n", zad6(13));
    //printf("%d \n", 312/10);

    return 0;
}
