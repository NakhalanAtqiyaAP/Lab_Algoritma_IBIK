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

    void Insert(int data){
        top++;
        stack[top] = data;
        size++;
    }
    int Pop(){
        IsEmpty();
        int value = stack[top];
        top--;
        size--;
        return value;
    }

    int IsEmpty(){
        if (size >= MAX)
        {
           cout<<"Data kosong";
           return -1;
        }
        
    }

    void Print(){
        cout<<"Isi dari stack:";
        for (int i = 0; i < top; i++)
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
    
    return 0;
}