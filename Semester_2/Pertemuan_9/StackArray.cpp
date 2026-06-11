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

    int pop(){
        if (size >= MAX)
        {
            cout<<"Tidak ada data";
            return -1;
        }
        int value = stack[top];
        top--;
        size--;
        return value;
        
    }

    void insert(int data){
        top++;
        stack[top] = data;
        size++;
    }

    void printStack(){
        for (int  i = 0; i < top; i++)
        {
            cout<<stack[i]<<' ';
        }
        cout<<endl;
        
    }
    int peek(){
        return stack[top];
    }

    int Size()
    {
        return size;
    }

    bool is_empty(){
        return size <= 0;
    }
};


int main()
{
    Stack* stack = new Stack();

    stack->insert(120);
    cout<<"Elemen teratas dari stack:"<<stack->peek()<<endl;


    stack->insert(127);
    cout<<"Elemen teratas dari stack:"<<stack->peek()<<endl;

    cout<<"Isi dari stack:"<<endl;
    stack->printStack();

    stack->pop();
     cout<<"Elemen teratas dari stack:"<<stack->peek()<<endl;



    return 0;
}