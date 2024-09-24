#include <stdio.h>

int sq(int n){
    return n*n;
}
float areaOfTriangle(float base, float height){
    return 0.5 * base * height; 
}

void main(){
    printf("%d ",sq(5));
    printf("\n");
    printf("%f ", areaOfTriangle(5,8));
}