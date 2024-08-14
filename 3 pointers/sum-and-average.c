#include <stdio.h>
int main(){
    int arr[]={10,20,30,40};

    // to iterate through the array
    int *ptr=arr;

    //initializing sum as 0
    int sum=0;

    int avg=0;

    // for finding the sum
    for(int i=0;i<4;i++){
        sum+=*(ptr+i);
    }

    // for getting the average
    avg=(float)sum/4;

    printf("the total sum is :- %d", sum);
    printf("the average is :- %d", avg);
}