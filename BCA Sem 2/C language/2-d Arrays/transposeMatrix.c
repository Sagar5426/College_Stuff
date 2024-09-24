#include <stdio.h>
void tranposeMatrix(int row, int column,int matrix[row][column]){
    int newMatrix[column][row];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            newMatrix[j][i] = matrix[i][j];
        }
    }

    printf("Updated Matrix: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%2d ",newMatrix[i][j]);
        }
        printf("\n");
    }
}



void main(){
    int row = 3, column = 3;
    int matrix[3][3] = {
                                {1,2,3},
                                {4,5,6},
                                {7,8,9}};

    tranposeMatrix(3,3,matrix);
    
    
}