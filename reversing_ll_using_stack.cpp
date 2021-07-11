// Reversing a linked list using stack

#include <iostream>
#include <stack>

using namespace std;

struct node {
    int data;
    node *next;
};

node *head = NULL;

void Reverse(){
    if (head == NULL){
        return;
    }
    stack<struct node*> S;
    
    node *temp = head;
    while(temp != NULL){
        S.push(temp); //pushes all the references
        temp = temp->next;
    }
    
    temp = S.top();
    head = temp; // head points to last node
    S.pop();
    while(!(S.empty())){
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL; // last node in the reverse order
}

struct node *insert(struct node *head, int data){
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;
    
    if (head==NULL){
        head = temp;
    }else{
        struct node *temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        
        temp1->next = temp;
    }
    return head;
}

void print(struct node *head){
    while(head!=NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(void){
    head = insert(head, 2);
    head = insert(head, 4);
    head = insert(head, 6);
    head = insert(head, 8);
    print(head);
    Reverse();
    print(head);
}
