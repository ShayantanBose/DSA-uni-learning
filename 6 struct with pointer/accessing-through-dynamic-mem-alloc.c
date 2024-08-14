#include <stdio.h>
#include <stdlib.h>
struct Student{
    int ID;
    char Name[50];
    int Age;
};
int main(){
    struct Student *std;
    int i,num;
    printf("Enter the number of students:- ");
    scanf("%d",&num);
    std=(struct Student*)malloc(num *sizeof(struct Student));
    for(i=0;i<num;i++){
        printf("Enter ID, Name, Age:- ");
        scanf("%d %s %d",&std->ID,&std->Name,&std->Age);
    }
}