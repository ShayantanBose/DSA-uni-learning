#include <stdio.h>
int main(){
    int scaled[2][3];
    int arr[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scaled[i][j]=arr[i][j]*3;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",scaled[i][j]);
        }
        printf("\n");
    }
}