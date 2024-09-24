#include <stdio.h>

// void multiplyMatrix(int matrix1[3][3], int matrix2[3][3]){
//     int n = 3, m = 3;
//     int newMatrix[n][m];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             newMatrix[i][j] = (matrix1[i][0]*matrix2[0][j])+(matrix1[i][1]*matrix2[1][j])+(matrix1[i][2]*matrix2[2][j]);
//             printf("%3d ",newMatrix[i][j]);
//         }
//         printf("\n");
//     }
// }

void multiplyMatrix(int matrix1[3][3], int matrix2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int result = 0;
            for (int k = 0; k < 3; k++) {
                result += matrix1[i][k] * matrix2[k][j];
            }
            printf("%3d ", result);
        }
        printf("\n");
    }
}

void main(){
    int matrix1[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};

    int matrix2[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};   

    multiplyMatrix(matrix1,matrix2);                                       
}