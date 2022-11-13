#include <stdio.h>

int main() {

    int a;
    int counter = 0;
    int res = 15;
    printf("Odgadnij liczbe od 1-5 \n");
    scanf("%d", &a);
    res-=a;
   
    if(a>5){
        printf("Zła liczba, za duzo");
    }else {
     if(counter<=3){
        res-=a;
        counter++;
       printf("Nie zgadłeś, spróbuj jeszcze raz ");
        scanf("%d", &a);
        //printf("%d res to  \n",res);
        
        if(counter<=3){
            res-=a;
            counter++;
            
            //res-=a;
          //printf("%d res to  \n",res);
          printf("Nie zgadłeś, spróbuj jeszcze raz ");
            scanf("%d ", &a);
            if(1>0){
            counter++;
            res-=a;
          
            //printf("xc ");
            //scanf("%d ", &a);
        }
        }
        if(counter==3){
            counter++;
            res-=a;
            //printf("%d  \n", res);
            printf("Nie zgdałeś  poprawna liczba to %d", res);
            
            
        }
        
        
    }
    }


  return 0;
}

