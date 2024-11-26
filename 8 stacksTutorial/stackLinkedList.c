#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* newnode(int data){
    struct Node* stackNode=(struct Node*)sizeof(struct Node);
    stackNode->data=data;
    stackNode->next=NULL;
    return stackNode;
}
int isEmpty(struct Node* top){
    return !top;
}
int peek(struct Node* top){
    if(isEmpty(top)){
        printf("Empty Stack");
        return -1;
    }
    return top->data;
}
void push(struct Node** top, int data){
    struct Node* stackNode = newNode(data);
    stackNode->next= *top;
    *top = stackNode;
}
int pop(struct Node* top){
    if(isEmpty(*top)){
        printf("Stack Underflow");
        return -1;
    }
    struct Node *temp = *top;
    *top=(*top)->next;
    int popped=temp->data;
    free(temp);
    return popped;
}
void printStack(struct Node *top){
    if(isEmpty(top)){
        printf("Underflow");
    }
    while(temp!=NULL){
        printf("%d", top->data);
        top = top->next;
    }

}