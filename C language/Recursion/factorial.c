#include <stdio.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}
void main(){
    
    int result = factorial(5);
    printf("Factorial: %d",result);
}