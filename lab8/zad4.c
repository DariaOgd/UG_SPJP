#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int lower = 1, upper = 49, count = 6;



        FILE *file;
    file = fopen("lotto.txt", "w");

    for(int i =0; i < 6;i++){
         int num = (rand() % (upper - lower + 1)) + lower;
        
            fprintf(file,"%d",num);
  
        

    }
     fclose(file);

    return 0;
}