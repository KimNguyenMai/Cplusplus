/*(2) Each node of a STACK contains the following information, in addition to required pointer field :
i) Roll number of the student
ii) Age of the student
    Give the structure of node for the linked stack in question TOP is a pointer which points to the topmost node of the STACK. Write the following functions.
i) PUSH() - To push a node to the stack which is allocated dynamically
ii) POP() - To remove a node from the stack and release the memory.*/

//lifo


#include <iostream>
using namespace std;

class Node{
    public:
    Node* previous;
    int RollNum, Age;
    Node(int RollNum, int Age){ //constructor
        this -> RollNum = RollNum;
        this -> Age = Age;
        previous = NULL;
    }
};

class Stack{
    public:
    //initializing node values
    Node* top = NULL;

    //push a node to the stack which is allocated dynamically
    void push(int RollNum, int Age){
        Node* newNode = new Node(RollNum, Age); //new node
    
        //put new node in to the stack and link nodes (on top)
        if (top == NULL) //if stack is empty, the new node is put on top
        {
            top = newNode;
        }
        else if (top != NULL){ //if not, move the top node to previous, then the new node is the new top
            newNode -> previous = top;
            top = newNode;
        }
    }

    //remove a node from the stack and release the memory
    void pop(){
        if (top == NULL){
            cout << "Stack is empty!" << endl;
        }
        
        else if (top != NULL){ //if stack isnt empty, the temp node CurrentNode is put on top, previous top is moved to the previous on the stack (the second node becomes the top node, and top node is deleted)
            Node* CurrentNode = top;    
            top = top -> previous;
            free(CurrentNode); //free memory
        }
    }

    //print stack
    void printStack(){
        Node* CurrentNode = top; //to use Current Node to traverse thru the whole stack to print every node
        while (CurrentNode != NULL)
        {
            cout << CurrentNode -> RollNum << " " << CurrentNode -> Age << endl;
            CurrentNode = CurrentNode -> previous;
        }
    }
};

int main(){
    Stack myStack;

    myStack.push(3, 23);
    myStack.push(4, 30);
    myStack.push(5, 31);
    myStack.push(6, 20);
    cout << "Original: " << endl;
    myStack.printStack();
    myStack.pop();
    cout << "After popping the top: " << endl;
    myStack.printStack();
}