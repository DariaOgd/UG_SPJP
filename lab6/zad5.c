#include <stdio.h>

int i = 1;
int zad5(int a){
    if(a == 0){
        return 0;
        
    }
    else {
        //printf(" %d \n",(zad5(a/2) * 10) +a%2  );
        return (zad5(a/2) * 10 + (a%2));
    }
    
}


int main()
{
    

    printf("%d \n", zad5(3));

    return 0;
}
