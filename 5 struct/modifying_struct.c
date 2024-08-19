#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE 100

struct Student{
    int ID;
    char Name[MAX_TITLE];
    int Percentage;
};

// Initialization of the structure
void InitStruct(struct Student **std, int *capacity, int *count){
    *count=0;
    *capacity=2;
    *std=(struct Student*)malloc(*capacity *sizeof(struct Student));
    if(*std==NULL){
        printf("Memory Allocation failed");
        exit(1);
    }

};

//Inserting elements in the structure
void InsertStruct(struct Student **std,int *capacity, int *count, int ID, float *Percentage, char *Name){
    if(*count==*capacity){
        *capacity*=2;
        *std=(struct Student *)realloc(*std, *capacity *sizeof(struct Student));
        if(*std==NULL){
            printf("the memory allocation failed");
            exit(1);
        }
        (*std)[*count].ID=ID;
        strncpy((*std)[*count].Name, Name, MAX_TITLE -1);
        (*std)[*count].Name[MAX_TITLE-1]='\0';
        (*std)[*count].Percentage=Percentage;
    }
};

void DeleteStruct(struct Student *std,int *count,int ID){
    
}
int main(){
    
    // for(int i=1;i<4;i++){
    //     printf("What is the name of the Student:- ");
    //     scanf("%s",&std[i].Name);
    //     printf("What is the ID of the Student:- ");
    //     scanf("%s",&std[i].ID);
    //     printf("What is the Percentge of the Student:- ");
    //     scanf("%s",&std[i].Percentage);
    // }
    // for(int i=0;i<4;i++){
    //     printf("The name of the student is %s\n",std[i].Name);
    //     printf("The id of the student is %d\n",std[i].ID);
    //     printf("The percentage of the student is %f\n",std[i].Percentage);
    // }

}