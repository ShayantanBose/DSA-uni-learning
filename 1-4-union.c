#include <stdio.h>

// unions - unions will hold only the last update value but will allocate the memory for others too
union Data{
    int i;
    float f;
    char c;
};
int main(){

    //decleration of the union
    union Data data;


    data.i=10;
    printf("the data is:- %d\n", data.i);

    data.f=12.2;
    printf("the data is:- %f\n", data.f);
    
    data.c='a';
    printf("The data is:- %c\n",data.c);


    //this will result in unexpected results
    printf("the data is:- %d\n", data.i);
    printf("the data is:- %f\n", data.f);
}