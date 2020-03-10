/*There are 2 parts in this assignment.
(1) Give the necessary declaration of a linked list implemented queue containing float type values. Also write a user-defined function in C++ to delete a float type number from the queue.
(2) Each node of a STACK contains the following information, in addition to required pointer field :
i) Roll number of the student
ii) Age of the student
    Give the structure of node for the linked stack in question TOP is a pointer which points to the topmost node of the STACK. Write the following functions.
i) PUSH() - To push a node to the stack which is allocated dynamically
ii) POP() - To remove a node from the stack and release the memory.*/

//fifo

#include <iostream>
using namespace std;

class Node{
    public:
    float data;
    Node* next;
    Node(float data){ //constructor
        this -> data = data;
        next = NULL;
    }
};

//queue containing float type values
class Queue{
    public:
    //initializing node values
    Node* first = NULL;
    Node* last = NULL;

    //insert function
    void insert (float data){
    //creating new node and assign new node into queue and link nodes to the next
        Node* newNode = new Node(data);
    
        if (first == NULL){ //if first node is empty, then new node becomes first node.
            first = newNode;
        }
        
        else {//if first node isnt empty
            if (last == NULL) //and the last node is empty, new node becomes last node
            {
                first -> next = newNode;
                last = newNode;
            }
            else if (last != NULL){ //or last node isnt empty, new node is the one after last node
                last -> next = newNode;
            }
        }
        
    }

//user-defined function in C++ to delete a float type number from the queue
    void del(float data){
        Node* CurrentNode = new Node(data); //create another node
        if (first == NULL){ //if first node is empty, node next to it is the first
            last = first;
        }
        else if (first != NULL){ //otherwise, move first node to the one next to it and delete the original first node
            CurrentNode = first;
            first = first -> next;
            free (CurrentNode); //free memory
        }
    }
   

    //print queue
    void printQ(){
        Node* CurrentNode = first;
        while (CurrentNode != NULL) //if queue is not empty, print the whole queue
        {
            cout << CurrentNode -> data << " ";
            CurrentNode = CurrentNode -> next;
        }   
    }
};


int main(){
    Queue myQueue;

    myQueue.insert(10);
    myQueue.insert(20);
    myQueue.insert(30);

    cout << "Before delete: " << endl;
    myQueue.printQ();
    cout << endl;

    myQueue.del(10);
    cout << "After delete: " << endl;
    myQueue.printQ();
}