#include <iostream>
using namespace std;

const int MAX = 5;

class Stack{
    private:
    int top;
    int stack[MAX];
    int size;

    public:
    Stack(){
        size = 0;
        top = -1;
    }

    int IsFull(){
       return size >= MAX;
    }

    bool IsEmpty(){
        return size <= 0;
    }

    void Insert(int data){
    if (IsFull())
        {
            cout<<"Data sudah penuh";
            return;
        }
        
        top++;
        stack[top] = data;
        size++;
    }
    int Pop(){
        if (IsEmpty())
        {
            cout<<"Data Kosong";
            return -1;
        }
        int value = stack[top];
        top--;
        size--;
        return value;
    }
    
    void Print(){
        cout<<"Isi dari stack:";
        for (int i = 0; i <= top; i++)
        {
            cout<<stack[i]<<' ';
        }
        cout<<endl;
        
    }

    int Peek(){
        return stack[top];
    }

    int Size(){
        return size;
    }

};

int main()
{
    Stack* stack = new Stack();

    stack->Insert(621);

    stack->Insert(999);

    stack->Insert(201);

    stack->Insert(94);

    stack->Insert(124); 

    stack->Print();

    stack->Pop();
    stack->Print();
    
    return 0;
}