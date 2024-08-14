#include <stdio.h>
int main(){
    int* pc, c;
    c=11;
    pc=&c;

    //variable
    printf("the ponter is:- %d\n",c);    
    printf("the address of the pointer is:- %p\n",&c);

    //pointer
    printf("the pointer is:- %d\n", *pc);
    printf("the address of the pointer is:- %p\n",pc);

    return 0;
}