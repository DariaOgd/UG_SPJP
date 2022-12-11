#include <stdio.h>


int czyPalindrom(char slowo[5], int x, int i){
    if(i == x){
        printf("palindrom \n");
        return 0;
    }
    else if(slowo[i] != slowo[x]){
        printf("nie palindrom \n");
        return -1;
    }
    
    if(i < x + 1){
    
    czyPalindrom(slowo,x - 1, i + 1);
    }
    

    
}


int main()
{

    char slowo[5] = "kajak";
    printf(" %d \n", czyPalindrom(slowo,4, 0));

    


    return 0;
}
