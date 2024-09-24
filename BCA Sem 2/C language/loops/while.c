#include <stdio.h>

void main(){
    int n, sum = 0;
    printf("Enter the number till where you add natural numbers: ");
    scanf("%d",&n);
    while(n > 0){
        sum+=n;
        n--;
    }
    printf("Sum: %d",sum);
}