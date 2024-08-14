#include <stdio.h>
#include <string.h>
struct Student{
    int RegNo;
    char Name[50];
    float Percentage;
};
int main(){
    struct Student stud[4];
    for(int i=1;i<4;i++){
        printf("what is the registeration number of the student:- ");
        scanf("%d", &stud[i].RegNo);
        printf("what is the name of the student:- ");
        scanf("%s", &stud[i].Name);
        printf("what is the percentage of the student:- ");
        scanf("%f", &stud[i].Percentage);
    }
    for(int i=0;i<4;i++){
        printf("The student's Registeration Number is :- %d",stud[i].RegNo);
        printf("The student's Name is:- %s", stud[i].Name);
        printf("The student's Percentage is:- %f", stud[i].Percentage);
    }
}