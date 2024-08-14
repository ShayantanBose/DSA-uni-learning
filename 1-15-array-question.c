#include <stdio.h>

void DeleteElem(int arr[], int size, int elem, int position){
    printf("Enter the element of the matrix you want to delete:- ");
    scanf("%d", &elem);
    if(position<0 || position>=size){
        printf("Invalid Position");
    }
    for(int i=position;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
};

void InsertElem(int arr[],int size, int elem, int position){
    printf("Enter the element of the matrix :- ");
    scanf("%d", &elem);
    if(position<0 || position>size){
        printf("Invalid Position");
    }
    for(int i=size;i>position;i--){
        arr[i]=arr[size-i];
    }
    arr[position]=elem;
    size++;
};

void printarray(int arr[],int size){
    for(int i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
};

int main(){
    int arr[]={1,2,3,4};
    int input;
    int size,position,elem;
    

    printf("Enter the size of the matrix :- ");
    scanf("%d", &size);
    
   
    for(int i=0;i<=size;i++){
        printf("Enter the elements of the matrix :- \n");
        scanf("%d", &arr[i]);
    }

    printf("Enter Y if you want to add element in the array:- ");
    scanf("%d", &input);


    if(input=='Y'){
        printf("Enter which position do you want to change in:- ");
        scanf("%d", &position);
        printf("Enter the elem you wanted to insert:- ");
        scanf("%d", &elem);
        InsertElem(arr,size,elem,position);
    }

    printf("Enter Y if you want to delete element in the array:- ");
    scanf("%d", &input);

    if(input=='Y'){
        printf("Enter which position do you want to change in:- ");
        scanf("%d", &position);
        printf("Enter the elem you wanted to delete:- ");
        scanf("%d", &elem);
        DeleteElem(arr,size,elem,position);
    }

    printarray(arr,size);
}