#include <iostream>
using namespace std;

struct Node
{
   int data;
   Node* left;
   Node* right;

   Node(int value){
    data= value;
    left= NULL;
    right= NULL;
   }
};


    void PreOrder(Node* node){
        if(node == NULL) return;
        cout<<node->data<<" ";
        PreOrder(node->left);
        PreOrder(node->right);
    }

    void InOrder(Node* node){
        if(node == NULL) return;
        InOrder(node->left);
        cout<<node->data<<" ";
        InOrder(node->right);
    }

        void PostOrder(Node* node){
            if(node == NULL) return;
            PostOrder(node->left);
            PostOrder(node->right);
            cout<<node->data<<" ";
        }

int main()
{
    Node* node = new Node(7);

    node->left = new Node(14);
    node->left->left = new Node(91);
    node->left->right = new Node(102);
    node->left->right->left = new Node(31); 
    node->left->right->right =new Node(87);
    node->left->right->left->left = new Node(93);
    node->left->right->left->left->left = new Node(24);
    node->left->right->left->left->right =new Node(76);

    node->right =new Node(83);
    node->right->left = new Node(192);
    node->right->right = new Node(932); 
    node->right->right = new Node(153); 
    node->right->right->left = new Node(772); 
    node->right->right->right = new Node(812); 


    cout<<"PreOrder :";
    PreOrder(node);
    cout<<endl;

    cout<<"InOrder:";
    InOrder(node);
    cout<<endl;

    cout<<"PostOrder :";
    PostOrder(node);
    cout<<endl;
    return 0;
}