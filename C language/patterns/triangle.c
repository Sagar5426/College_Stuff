#include <stdio.h>

void main(){
    int n = 4;
    for(int i = 1; i <= n; i++){
        // spaces
        // for(int j = n-i; j >= 1 ; j--){
        //     printf(" ");
        // }
        for(int j = 1; j <= n-i ; j++){
             printf(" ");
         }
        //1st half
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        // 2nd half 
        for(int j = 2; j <= i; j++){
            printf("*");
        }

        printf("\n");
    }
}


//   *
//  ***
// *****
//*******