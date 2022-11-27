#include <stdio.h>
#include <string.h>

int palindrom(char * str){
    int h = strlen(str)-1;
    int i = 0;

    while(h > i){
        char a = str[i];
        char b = str[h];
        if(a!=b){
            printf("Nie palindrom");
            break;
            
        }
        else if(h==i){
             printf("Palindrom");
        }
        h--;
        i++;
        
    }
}

void main(){
    printf("%d \n",palindrom("abagrba"));
}