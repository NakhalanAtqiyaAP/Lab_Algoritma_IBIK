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

Node* Insert(Node* node, int value){
    if (node == NULL)
    {
      node = new Node(value);
    }else if(value <= node->data){
        node->left = Insert(node->left, value);
    }else{
        node->right = Insert(node->right, value);
    }
}

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
    Node* root = NULL;
    root = Insert(root, 7);
    root = Insert(root, 14);
    root = Insert(root, 91);
    root = Insert(root, 102);
    root = Insert(root, 31);
    root = Insert(root, 87);
    root = Insert(root, 93);
    root = Insert(root, 24);
    root = Insert(root, 76);
    root = Insert(root, 83);
    root = Insert(root, 192);
    root = Insert(root, 932);
    root = Insert(root, 153);
    root = Insert(root, 772);
    root = Insert(root, 812);

    cout<<"PreOrder :";
    PreOrder(root);

    cout<<"InOrder:";
    InOrder(root);

    cout<<"PostOrder :";
    PostOrder(root);
    return 0;
}