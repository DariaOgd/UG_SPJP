#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("Podaj dwa wierzchołki prostokąta\n");
    scanf("%d %d", &a, &b);
    if(a>b){
        int wys = a*a-b*b;
        int h =wys;
        
        int pole = a*h*1/3;
    
        printf("%d\n", pole);
    }else if(b>a){
        int wys = b*b-a*a;
        int h =wys;
        int pole = a*h*1/3;
        printf("%d\n", pole);
    }
    
    

    return 0;
}