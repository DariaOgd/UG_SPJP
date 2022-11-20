//Napisz program który wypisze trójkąt Pascala wysokości 5.

#include <stdio.h>
int main(){
    int n = 4;

    int num = 1;
    int p;
    
   int rows, c = 1, i, j;
  
  
   for (i = 0; i < n; i++) {
      for (p = 1; p <= n - i; p++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            c = 1;
         else
            c = c * (i - j + 1) / j;
         printf("%4d", c);
      }
      printf("\n");
   }
}
