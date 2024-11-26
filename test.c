#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
};

void createNode(struct Node ** head, int newdata){
    struct Node * newNode = (struct Node**)malloc(sizeof(struct Node));
    newNode->data=newdata;
    newNode->next=*head;
    *head = newNode;
}

void InsertatEnd(struct Node ** head, int newData){
    struct Node * newNode = (struct Node**)malloc(sizeof(struct Node));
    newNode->data=newData;
    newNode->next=NULL;
    if(*head=NULL){
        createNode(newNode,newData)
    }
    struct Node * temp = *head;
    if(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    free(temp);
}
void insertAtMiddle(struct Node ** head, int pos, int newData){
    struct Node * newNode = (struct Node**)malloc(sizeof(struct Node));
    createNode->data=newData;
    if(pos <= 0 || *head == NULL){
        createNode(newNode,newData);
    }
    struct Node * temp = *head;
    int count = 0;
    while(temp!=NULL && count<pos){
        temp=temp->next;
        count++
    }
    while(temp!=NULL){
        newNode->next=temp->next;
        temp->next=newNode;
    }
    free(temp);
}
