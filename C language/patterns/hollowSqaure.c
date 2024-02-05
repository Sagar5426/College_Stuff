#include <stdio.h>

void main(){
    int n = 5, m = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i==n || j==m|| i==1|| j==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}