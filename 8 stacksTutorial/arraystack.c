#include <stdio.h>
#include <stdlib.h>
struct Stack{
    int *array;
    int capacity;
    int top;
};
struct Stack* createStack(int capacity){
    struct Stack* newStack=(struct *Stack)malloc(sizeof(struct Stack));
    newStack->capacity=capacity;
    newStack->top=-1;
    newStack->array=(int*)malloc(newStack->capacity(sizeof(int)));
}
int isEmpty(struct Stack* stack){
    return stack->top==-1;
}
int isFull(struct Stack* stack){
    return stack->top==stack->capacity-1;
}
void push(struct Stack* stack, int value){
    if(isFull(stack)){
        printf("Overflow");
    }
    stack->array[++stack->top] = value;
}
int pop(struct Stack* stack){
    if(isEmpty(stack)){
        printf("Stack underflow");
    }
    return stack->array[stack->top--];
}
int peek(struct Stack* stack){
    if(isEmpty(stack)){
        printf("Stack empty")
    }
    return stack->array=stack->top;
}
void printStack(struct Stack* stack){
    if(isEmpty(stack)){
        printf("Empty Stack");
    }
    for(int i = 0;i <= stack->top;i++){
        printf("%d", stack->array[i]);
    }
    printf("\n");
}