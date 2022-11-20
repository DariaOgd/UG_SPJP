#include <stdio.h>
int main(){
int x= 10;
int i,j;
int arr[10][10]; 
int a = 2;
int b = 4;
int a1 = 3;
int b2 =4;
int o = 9;

for(i = 0; i < x; i++)
{
   for(j = 0; j < x ; j++) 
   {
    
    arr[i][j] = 1;
    arr[a][b] = 0;

    
    
      printf("%d\t",arr[i][j]);
   }
printf("\n");
}


// for(i = 0; i < x; i++)
// {
//    for(j = 0; j < x ; j++) 
//    {
//     arr[a1][b2] = 0;
   

    
    
//       printf("%d\t",arr[i][j]);
//    }
// printf("\n");
// }

while(o < 5){
    for(i = 0; i < x; i++)
{
   for(j = 0; j < x ; j++) 
   {

    if(a+1 > 9 && j < 10){
        j++;
    }else if (a+ 1 < 10 && j + 1 > 9){
        
    }
    arr[a+1][b+1] = 0;
   

    
    
      printf("%d\t",arr[i][j]);
   }
printf("\n");
}
}


    
}

