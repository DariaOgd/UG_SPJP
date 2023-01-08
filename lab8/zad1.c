#include <stdio.h>
#include <stdlib.h>

int main(){
 FILE* file = fopen ("liczby.txt", "r");
  int i = 0;
  int max = 4;
  int min = 4;

  fscanf (file, "%d", &i);    
  while (!feof (file))
    {  

        if(i > max){
            max = i;
        }
        if(i < min){
            min = i;
        }
      printf ("%d \n", i);
      fscanf (file, "%d", &i);      
    }
  fclose (file);
  printf("%d %d", max,min);


}