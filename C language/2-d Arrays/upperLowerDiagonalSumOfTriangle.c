#include <stdio.h>

void SumOfTriangle(int row, int column, int arr[row][column]){
    int upperPart = 0, lowerPart = 0, diagonalPart = 0;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(i>j){
                upperPart+=arr[i][j];
            }else if (i<j){
                lowerPart+= arr[i][j];
            }else{
                diagonalPart+=arr[i][j];
            }
        }
    }
    printf("Sum of Upper Part of Triangle: %d \n",upperPart);
    printf("Sum of Lower Part of Triangle: %d \n",lowerPart);
    printf("Sum of Diagonal of Triangle: %d \n",diagonalPart);
}

void main(){
    int matrix[3][3] = {
                                {1,2,3},
                                {4,5,6},
                                {7,8,9}};

    SumOfTriangle(3,3,matrix);                            
}
