#include <stdio.h>
int main(){
    int transposed[3][2];
    int arr[2][3]={{1,2,3},{4,5,6}};
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            transposed[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",transposed[i][j]);
        }
        printf("\n");
    }
}