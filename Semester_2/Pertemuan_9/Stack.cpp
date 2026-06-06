#include <iostream>
using namespace std;

struct Node
{
   Node* next;
   int data;
};

class Stack{
    private:
    Node* top;

    public:
    Stack(){
        top = NULL;
    }

    void insert(int nilai){
        Node* node = new Node();
        node->data = nilai;
        node->next = top;
        top = node;
    }

    void pop(){
        if(!isEmpty()){
            cout<<"Empty";
            return;
        }
       Node* temp = top;
    }

    bool isEmpty(){
        return top == NULL;
    }
};


int main()
{
    
    return 0;
}