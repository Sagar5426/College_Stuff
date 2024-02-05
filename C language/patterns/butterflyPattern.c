#include <stdio.h>

void main(){
    int n = 5, m= 5;
    // 1st half of pattern
    // left side
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
    // spaces
    for(int j = 0; j < (n-i)*2; j++){
        printf(" ");
    }
    // right side
    for(int j = 1; j <= i; j++){
        printf("*");
    }
    // next line
    printf("\n");
    }

    // 2nd Half of pattern    
    for(int i = n; i>=1; i--){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
    // spaces
    for(int j = 0; j < (n-i)*2; j++){
        printf(" ");
    }
    // right side
    for(int j = 1; j <= i; j++){
        printf("*");
    }
    // next line
    printf("\n");
    }
    
    
}

// *        *
// **      **
// ***    ***
// ****  ****
// **********