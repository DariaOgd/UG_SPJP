#include <stdio.h>
#define pi 3.14
int main(){
    int a;

    scanf("%d", &a);
    double conv = a/pi;
    double res = (conv*360)/2*pi;
    printf("%.5lf", conv);


}