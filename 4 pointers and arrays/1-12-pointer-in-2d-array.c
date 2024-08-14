#include <stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int *ptr;
    ptr=&arr[0][0];
    for(int i=0;i<2;i++){

        for(int j=0; j<3;j++){

            //proper pointer syntax for 2D matrix - *(ptr +i*3 + j)
            if(*(ptr + i*3 + j)==1){

                printf("yes 1 is present");
            }
        }
    }
    return 0;
}