#include <stdio.h>
int diagonalSum(int row, int column,int arr[row][column]){
    int size = row*column;
    int sum = 0;
    for(int i = 0; i < row; i++){
        sum+= arr[i][i];
    }
    return sum;
}
void main(){
    int row = 3, column = 3;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Sum: %d",diagonalSum(row,column,matrix));
}