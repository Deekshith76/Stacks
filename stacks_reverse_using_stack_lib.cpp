// Stack to reverse
// 1. Reversing a string 
// 2. Reversing a linked list

// Cpp implementation

#include <iostream>
#include <stack> // stack from standard template library (STL)
#include <cstring>
using namespace std;

/* class Stack{
    private:
        char A[101];
        int top;
    public:
        void push(int x);
        void pop();
        int Top();
        bool isEmpty();
}; */

void Reverse(char *C, int n){
    stack<char> S; 
    
    // loop for push
    for(int i=0; i<n; i++){
        S.push(C[i]);
    }
    
    // loop for pop
    for(int i=0; i<n; i++){
        C[i] = S.top(); // overwrite the character at index i
        S.pop(); // perform pop
    }
}

int main(void){
    char C[51]; //character array
    printf("Enter a string: ");
    cin.get(C, 51);
    Reverse(C, strlen(C));
    printf("Output: %s\n", C);
}
