#include <stdio.h>
int i;
int zad3(int a){
    if(a == 0){
        return 0;
    }
    else {
        printf("%d \n", a);
        return zad3(a-1);
    }
};
int main()
{
    int i = 5;
    
    printf("%d \n", zad3(5));

    return 0;
}
