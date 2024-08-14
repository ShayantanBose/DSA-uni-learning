#include <stdio.h>
int main(){
    int sub[2][3];
    int arr[2][3]={{1,2,3},{4,5,6}};
    int arr2[2][3]={{7,8,9},{41,51,61}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sub[i][j]=arr[i][j]-arr2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
}