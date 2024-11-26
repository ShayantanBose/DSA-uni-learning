#include <stdio.h>
#define MAX 5;
struct Queue{
    int item[MAX];
    int rear;
    int front;
};

void initializationQueue(struct Queue *q){
    q->front = -1;
    q->rear = -1;
}

int isFull(struct Queue *q){
    return  q->rear == MAX-1;
}

int isEmpty(struct Queue *q){
    return q->front == -1 || q->front > q->rear;
}

void enqueue(struct Queue *q, int value){
    if(isFull(q)){
        printf("Queue is full");
        return;
    }
    if(isEmpty(q)){
        q->front = 0;
    }
    q->rear++;
    q->item[q->rear] = value;
    printf("Queue Enqued");
}

void dequeue(struct Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty");
    }
    printf("Queue is dequeued %d\n", q->items[q->front])
    q->front++;
}
