#include <stdio.h>


int fib(int a, int acc1, int acc2){
    if(a == 0){
        return acc1;
    };
    if(acc1 ==a){
        return acc2;
    }
    
    
    else {
        return fib(a - 1, acc2, acc1 + acc2);
    }

};


int main()
{
    

    printf("%d \n", fib(9,0,1));

    return 0;
}
