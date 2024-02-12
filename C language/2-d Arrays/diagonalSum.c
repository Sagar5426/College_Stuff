#include <stdio.h>

void diagonalSum(int matrix[3][3]){
    int sum = 0;
    int size = 3;
    for(int i = 0; i < size; i++){
        sum += matrix[i][i];
    }
    printf("Sum: %d ",sum);
}

void main(){
    int row = 3, column = 3;
    int matrix[3][3] = {
                                {1,2,3},
                                {4,5,6},
                                {7,8,9}};   
    diagonalSum(matrix);                             
}