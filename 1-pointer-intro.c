//pointer introduction
#include <stdio.h>
int main(){
    int var=10;
    int* ptr;
    ptr=&var;
    printf("The variable is :- %d\n",var);
    printf("The pointer is :- %d\n",*ptr);
    printf("The address of the pointer is:- %d",ptr);
}



//pointer that itterates through the array
#include <stdio.h>
int main(){
    int *ptr;
    int arr[]={10,20,30,40};
    for(int i=0;i<4;i++){
        printf("The array is:- %d",*(ptr+i));
    }
}



//transpose of a matrix:-
#include <stdio.h>
int main(){
    int transposedarr[4][4];
    int arr[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            transposedarr[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",transposedarr[i][j]);
        }
        printf("\n");
    }
}

