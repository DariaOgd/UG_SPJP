#include <stdio.h>
int i = 0;
int zad1(int n, int acc){
    if(n == 1){
        return acc;
    }
    else {
        return zad1(n-1, acc*=n);
    }
};
int main()
{
    int i = 5;
    
    printf("%d \n", zad1(5, 1));

    return 0;
}
