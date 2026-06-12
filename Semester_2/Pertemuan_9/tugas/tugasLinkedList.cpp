#include <iostream>
using namespace std;

struct Node
{
    Node* next;
    Node* prev;
    int data;
};

class LinkedListDouble
{
    private:
        Node* head;
        Node* tail;
        int length;
        public:
    LinkedListDouble(){
        head=NULL;
        tail=NULL;
        length=0;
    }

    void Push(int data){
        Node* node = new Node();
        node->data = data;
        node->next = NULL;

        if(head == NULL){
            node->prev = NULL;
            head = node;
            tail = node;

        }else{
            Node* temp = tail;
            tail->next = node;
            tail = node;
            node->prev = temp;
        }
        length++;
    }

    void Insert(int data, int position){
        if (position < 0 || position > length)
        {
            cout<<"Insert diluar batas linked list"<<endl;
            return;
        }

        Node* node = new Node();
        node->data = data;

        if (position == 0)
        {
            node->prev = NULL;
            node->next = head;
            head= node;
        }else if(position == length){
            node-> next = NULL;
            node->prev = tail;
            tail = node;
        }else{
            Node* target = head;
            for (int i = 0; i < position - 1; i++)
            {
                target = target ->next;
            }
            Node* temp = target->next;
            target->next = node;
            node->next = temp;

            node->prev = target;
            
            temp->prev = node;

            
          
        }
        length++;
        
    }

    void Remove(int position){
        Node* targetNode = head;
        for (int i = 0; i < position; i++)
        {
           targetNode = targetNode->next;
        }
        if (targetNode == head && length == 1)
        {
            head = NULL;
            tail = NULL;
        }else if(targetNode == head){
            head = head->next;
            head->prev = NULL;
        }else if(targetNode == tail){
            tail = tail->prev;
            tail->next = NULL;
        }else{
            Node* prevNode = targetNode->prev;
            Node* nextNode = targetNode->next;
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
        }
        delete targetNode;
        length--;
        
        
    }

    void PrintNodesFrontwards(){
        Node* node = head;
        cout<<"Dari depan ke belakang :";
        while (node != NULL)
        {
            cout<<node->data<<' ';
            node= node->next;
        }
        cout<<endl;
        
    }

    void PrintNodesBackwards(){
        Node* node = tail;
        cout<<"Dari belakang ke depan : ";
        while (node != NULL)
        {
            cout<<node->data<<' ';
            node= node->prev;
        }
        cout<<endl;
        
    }

};



int main()
{
    LinkedListDouble* linklist = new LinkedListDouble();
    linklist->Push(24);
    linklist->Push(10);
    linklist->Push(33);
    linklist->Push(33);

    linklist->PrintNodesFrontwards();
    linklist->PrintNodesBackwards();

    cout<<endl;
    cout<<"setelah ada data insert:"<<endl;

    linklist->Insert(20, 3);

    linklist->PrintNodesFrontwards();
    linklist->PrintNodesBackwards();

    return 0;
}