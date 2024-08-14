#include <stdio.h>
#include <stdlib.h>
int **MatrixInput(int rows, int column){
    int **Matrix = (int**)malloc(rows*sizeof(int));
    for(int i=0;i<rows;i++){
        Matrix[i]=(int*)malloc(column* sizeof(int));
    }
    return Matrix; 
}
void FreeMatrix(int** Matrix, int rows){
    for(int i=0;i<rows;i++){
        free(Matrix[i]);
    }
    free(Matrix);
}
int** Mul(int **mat1, int** mat2, int row1, int col1, int col2){
    int** result=MatrixInput(row1,col1);
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            result[i][j]=0;
            for(int k=0;k<col2;k++){
                result[i][j]+=mat1[i][j]*mat2[j][i];
            }
        }
    }
    return result;
}
int main(){
    int r1,r2,c1,c2;
    scanf("%d %d",r1,r2);
    scanf("%d %d",c1,c2);
    if(c1!=r2){
        printf("no");
    }
    int **m1=MatrixInput(r1,c1);
    int **m2=MatrixInput(r2,c2);
}
