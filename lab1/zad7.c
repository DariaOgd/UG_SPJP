#include <stdio.h>

int main(){
    int d,m,r;
    printf("Podaj dzien, miesiąc i rok\n");
    scanf("%d %d %d", &d, &m,&r);
    


    if(d >0 && r >0 && m>0 && m<=13){
        
        if(r %4 == 0 &&m==2){
            if(r%100 ==0 && m==2){
                if(r%400==0 && m==2){
                    if(m==2 && d==28){
                        printf("Dane poprawne");
                    }
                }
            
            }
            
        
        }
        else if( r%4 !=0 || r%100!=0 || r%400 !=0){
                if(m==2 && d==29){
                    printf("Dane poprawne");

                }else printf("Dane niepoprawne luty nie może być różne od 29");

            }
        
        else if(m%2!=0 && m!=2){
            if(d<=31){
                printf("Dane poprane");
            }else printf("Dane niepoprawne");
        }
        else if(m%2==0 && m!=2){
            if(d<=30){
                printf("Dane poprane");
            }else printf("Dane niepoprawne");
        }
        else printf("Dane poprawne");
    }

    return 0;
}