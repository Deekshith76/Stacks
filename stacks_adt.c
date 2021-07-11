// Stack: A list with a constraint that the insertion and deletion of an element can be done only through one end i.e. top end

// Stack is LIFO Data Structure (Last In First Time
// Applications:
// 1. Execution of function calls/ Recursion calls
// 2. To implement the undo operator in text or video editor

// Operations available with the data structure are 
// 1. Push(x) - Adds the element to list
// 2. Pop() - Removes the top most element from the list
// 3. Top() - Returns the top most value of the list
// 4. isEmpty() - returns a boolean indicating whether the lsit is empty or not
// All the above operations are performed in a CONSTANT TIME O(1)

// We can implement stacks using arrays or linked lists

// Array Implementation

#include <stdio.h>
#define MAX_SIZE 101
int arr[MAX_SIZE];
int index1; // indicates the index of arr

void push(int);
void pop();
void print();
int top();

int main(void){
    index1 = -1; // empty stack
    push(2);
    push(4);
    print();
    int upper = top();
    printf("%d\n", upper);
    push(6);
    print();
    upper = top();
    printf("%d\n", upper);
    pop();
    print();
    pop();
    print();
 
}

void push(int x){
    
    if(index1 == MAX_SIZE - 1){
        printf("Error: stack overflow\n");
        return;
    }
    
    arr[++index1] = x;

}

void pop(){
    if (index1 == -1){
        printf("No element to pop\n");
        return;
    }
    index1 = index1 - 1;
}

void print(){
    for(int i=0; i<=index1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int top(){
    return arr[index1];
}


// Overflow : Creating the new larger array (twice the smaller array) and coping all the array elements into the larger array

// Push - O(1) -> best case
//        O(n) -> worst case
//        O(1) -> average case
