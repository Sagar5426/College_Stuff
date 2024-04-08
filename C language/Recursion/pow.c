#include <stdio.h>


int pow(int x, int n){
    if(n == 0){
        return 1;
    }

    int halfPow = pow(x,n/2);
    int halfPowSqr = halfPow * halfPow;
    if(n%2 != 0){
        return x * halfPowSqr;
    }else{
        return halfPowSqr;
    }
}

void main(){
    int result = pow(5,2);
    printf("Result: %d ",result);
}