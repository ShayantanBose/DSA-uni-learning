#include <stdio.h>
#include <stdlib.h>
struct Node{
    int coeff;
    int exponent;
    struct Node* next;
};
struct Node* creatNode(int coeff, int exponent){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->coeff=coeff;
    newNode->exponent=exponent;
    newNode->next=NULL;
    return newNode;
}
