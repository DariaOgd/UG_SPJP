#include <stdio.h>
int x = 5;

int main(){
    int * wsk = NULL;
    wsk = &x;
    int kopia;
    kopia = *wsk;
    printf("%d \n", kopia );
    zad1(x,kopia);

 
}
void zad1(int a, int b){
    printf(" %p \n", &a);
    printf(" %p \n", &b);

}