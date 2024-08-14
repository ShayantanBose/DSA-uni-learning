#include <stdio.h>
int main(){
    int sum[2][3];
    int arr[2][3]={{1,2,3},{4,5,6}};
    int arr2[2][3]={{7,8,9},{41,51,61}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}