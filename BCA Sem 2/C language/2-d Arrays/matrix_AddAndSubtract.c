#include <stdio.h>

void addMatrix(int matrix1[3][3],int matrix2[3][3]){
    int row = 3;
    int column = 3;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrix1[i][j] += matrix2[i][j];
            printf("%3d ",matrix1[i][j]);
        }
        printf("\n");
    }
}

void subtractMatrix(int matrix1[3][3],int matrix2[3][3]){
    int row = 3;
    int column = 3;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrix1[i][j] -= matrix2[i][j];
            printf("%3d ",matrix1[i][j]);
        }
        printf("\n");
    }
}

void main(){
    int matrix1[3][3] = {{1,2,3}
                        ,{4,5,6},
                         {7,8,9}};

    int matrix2[3][3] = { {1,2,3},
                          {4,5,6},
                          {7,8,9}};

    printf("Addition: \n");                      
    addMatrix(matrix1,matrix2);

    printf("Subtraction: \n");
    subtractMatrix(matrix1,matrix2);

}