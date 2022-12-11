#include <stdio.h>

int i = 1;
int fib(int a){
    if(a < 3){
        return 1;
    };
    
    
    return fib(a-1)+fib(a-2);

};


int main()
{
    

    printf("%d \n", fib(9));

    return 0;
}
