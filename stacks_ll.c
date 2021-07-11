// Linked List Implementation of Stacks
// insertion or deletion can be done in 2 ways
// 1. At the end of list -> O(n)
// 2. At the beginning od list -> O(1)

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


void push(int);
void pop();
int topmost();
void print();

struct node *top = NULL;

int main(void){
    push(2);      print();
    push(4); 
    push(6);      print();
    pop();
    print();
    
    int upper = topmost();
    printf("%d\n", 
}

void push(int x){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop(){
    struct node *temp;
    if (top == NULL){
        return;
    }
    temp = top;
    top = top->next;
    free(temp);
}

int topmost(){
    if (top != NULL){
        int val = top->data;
        return val;
    }
    return 1;
}
void print(){
    struct node *ptr = top;
    if (ptr!= NULL){
        printf("%i ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
