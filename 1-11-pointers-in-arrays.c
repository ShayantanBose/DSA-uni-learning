#include <stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int *ptr;

    ptr=arr; //ptr=&arr[0] will also result in the same thing

    for(int i=0;i<4;i++){
        printf("%d",*(ptr+i));
    }
    

}