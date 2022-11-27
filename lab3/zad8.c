#include <stdio.h>
int zad8(int d, int m, int r){
    if(r >0 && m> 0 && m<=12 && d> 0 &&d <=31 ){
        return 1;
        
    }
    else return 0;
}


// #include <stdio.h>
// int czyPrzest(int a){
//      if(a %4 == 0){
//         if(a%100 ==0){
//             if(a%400){
//                 return 1;
//             }
//             else return 0;
//         }
//         else return 0;
//     }else return 0;

//     return 0;
// }
// int zad8(int d,int m,int r){
//     if(m %2 != 0){
//         if(m >0 && m <=12 && d <=31 && r>0){
//             printf("dobry \n");
//             return 0;
//         }
//     }
//     else if(m%2 == 0 && m!=2){
//         if(d <=30 && d >0 && r >=0 && m <=12 && m>0 ) {
//             printf("dobry \n");
//             return 0;
//         }
//     }
//         else if(m==2){
//             if(czyPrzest(r)==1 && r > 0){
//             if(d <=28 && d >0) {
//             printf("dobry \n");
//             return 0;
//         }
//             }

//             else if()

//     }

// }