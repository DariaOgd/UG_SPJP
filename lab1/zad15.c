#include <stdio.h>

int main(){
    int a;
    int counter = 0;
    printf("Odgadnij liczbe od 1-5 \n");
    scanf("%d", &a);
    
    if(a>5){
        printf("Zła liczba, za duzo");
    }else {
     if(a!= 5 && counter<=3){
        counter++;
        printf("Żle spróbuj jeszcze raz");
        scanf("%d", &a);
        if(a!= 5 && counter<=3){
            counter++;
            printf("Żle spróbuj jeszcze raz");
            scanf("%d", &a);
        }
        if(a!= 5 && counter==3){
            counter++;
            printf("Nie zgdałeś");
            
        }
        if(a==5){
            printf("Zgadłeś\n");
        }

    }else if(a==5){
        printf("Zgadłeś\n");
    }
    }

    return 0;
}