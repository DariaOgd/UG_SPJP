#include <stdio.h>
int i;
int zad2(int a, int b){
    if(b == 0){
        return a;
    }
    else {
        i = a%b;
        return zad2(b,i);
    }
};
int main()
{
    int i = 5;
    
    printf("%d \n", zad2(26, 12));

    return 0;
}
