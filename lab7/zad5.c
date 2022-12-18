#include <stdio.h>

int main(){
    int a,b,c;
    int* pt1;
    int* pt2;
    int* pt3;
    a = 5;
    b = 21;
    c = 16661;
    pt1 = &a;
    pt2 = &b;
    pt3 = &c;
    // int kopia1 = *pt1;
    // int kopia2 = *pt2;
    // int kopia3 = *pt3;
    // printf(" %d \n", *pt1);
    // printf(" %d \n", *pt2);

    // if(kopia1 > kopia2){
    //     pt2 = pt1;
    //     pt1 = pt2;
        
    // }
    // printf("------------------ \n");
    // printf(" %d \n", *pt1);()
    // printf(" %d \n", *pt2);

    zad5(pt1, pt2, pt3);




} 

int zad5(int* a, int* b, int *c ){

    // printf(" %p \n", b);
    // printf(" %p \n", c);

    int *pt;

    if(*a > *b && *b > *c){
        pt = a;
        a = b;
        pt = b;
        
        
    }
    else if(*a > *b && *c>*b){
        pt = a;
        a = c;
        c= b;
        
    }
    else if(*b > *a && *a>*c){
        pt = b;
        b = pt;
  
    }
    else if(*c > *a && *a>*b){
        c = b;
        a= b;
        pt = b;
        
        

    }
    else if(*c > *a && *b>*a){
        pt = c;
        a = pt;
        c = b;
        //b=a;
        
        

        

    }



    


    printf(" %d \n", *pt);
    printf(" %d \n", *a);
    printf(" %d \n", *b);
    //printf(" %d \n", *b);

    return 0;
    
}