#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

// Node* createNode(int data){
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data=data;
//     newNode->next=NULL;
//     return newNode;
// };

void InsertatBegining(struct Node** had, int newData){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=newData;
    newNode->next= *head;
    *head=newNode;
};

void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d \n", ptr->data);
        ptr= ptr->next;
    }
}
void InsertatEnd(struct Node** head,int newData){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=newData;
    newNode->next=NULL;
    if(*head==NULL){
        *head=newNode;
    }
    struct Node* last=*head;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newNode;
}
void insertAtMiddle(struct Node **head, int data, int position) {
    struct Node *newNode = createNode(data);
    // If inserting at the beginning
    if (position <= 0 || *head == NULL) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    int count = 1;
    // Traverse the list to find the position before insertion point
    while (temp != NULL && count < position) {
        temp = temp->next;
        count++;
    }
    // Insert the new node in the middle
    if (temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
struct Node* deletefirst(struct Node* head){
    struct Node* ptr = head;
    head=head->next;
    free(ptr);
    return head;
}
struct deleteIndex(struct Node* head, int index){
    struct Node* p=head;
    int i = 0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct Node* q=p->next;
    p->next=q->next;
    free(q);
    return head;
}
struct deleteLast(struct Node* head){
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->next!=NULL){
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
struct Node* deleteGiven(struct Node* head, int value){
    struct Node* p= head;
    struct Node* q = head->next;
    while(q->data!=value&&q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}
int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=first;

    first->data=9;
    first->next=second;

    second->data=10;
    second->next=NULL;

    InsertatBegining(&head, 10);
    InsertatEnd(&head, 40);

    LinkedListTraversal(head);
}
