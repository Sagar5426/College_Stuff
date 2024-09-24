#include <stdio.h>
void fibonacci(int n){
    int first = 0, second = 1;
    printf("Fibonacci sequece upto %d terms: ",n);
    for(int i = 0; i < n; i++){
        printf("%d ",first);
        int next = first + second;
        first = second;
        second = next;
    }
}


// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }
void main(){
    fibonacci(5);
    
}