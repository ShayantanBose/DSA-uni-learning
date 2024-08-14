#include <stdio.h>
int main(){
    int mul[2][3];
    int arr[2][3]={{1,2,3},{4,5,6}};
    int arr2[2][3]={{2,4,1},{4,1,5}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            mul[2][3]=0;
            for(int k=0;k<3;k++){
                mul[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}