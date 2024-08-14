#include <stdio.h>
struct Student{
    int Id;
    char Name[50];
};
int main(){
    struct Student *std, stud;
    std=&stud;
    printf("what is the ID of the student:- ");
    scanf("%d",&std->Id);
    printf("what is the name of the student:- ");
    scanf("%s",&std->Name);
    printf("The ID of the student is:- %d", std->Id);
    printf("The Name of the student is:- %d", std->Name);
}