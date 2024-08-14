//swapping two numbers
#include <stdio.h>
void swap(int *ptr1, int *ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("the swapped pointers are:- ");
}
int main(){
    int a,b;
    a=10;
    b=20;
    swap(&a,&b);
    printf("%d %d",a,b);
}
