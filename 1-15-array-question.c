#include <stdio.h>
void InsertElem(int arr[],int size, int elem){
    printf("Enter the element of the matrix :- ");
    scanf("%d", &elem);
};

void printarray(int arr[],int size){
    for(int i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
};

int main(){
    int arr[]={1,2,3,4};
    int input;
    int size;
    
    
    printf("Enter the size of the matrix :- ");
    scanf("%d", &size);
    
    
    for(int i=0;i<=size;i++){
        printf("Enter the elements of the matrix :- \n");
        scanf("%d", &arr[i]);
    }

    printarray(arr,size);
}