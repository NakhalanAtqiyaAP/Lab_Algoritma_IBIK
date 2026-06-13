#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data= value;
        left = NULL;
        right = NULL; 
    }
};

class Tree
{
public:
    Node* root;
    Tree() {root = NULL;}

    void Insert(int value){
        root = Insert(root, value);
    }
    Node* Insert(Node* node, int value){
        if (node == NULL)                               // Jika node belum ada maka node yang baru akan menjadi parent
        {
          node = new Node(value);
        }else if(value <= node->data){                  // Jika node lebih kecil dari parent dari node value maka akan ke kiri
            node-> left = Insert(node->left, value);
        }else{                                          // Jika node lebih besar dari parent maka node value akan ke kanan
            node->right = Insert(node->right, value);
        }
        return node;
    }

    void PreOrder(){
        PreOrder(root);
    }   

    void PreOrder(Node* node){
        if(node == NULL) return;
        cout<<node->data<<" ";
        PreOrder(node->left);
        PreOrder(node->right);
    }

    void InOrder(){
        InOrder(root);
    }

    void InOrder(Node* node){
        if(node == NULL) return;
        InOrder(node->left);
        cout<<node->data<<" ";
        InOrder(node->right);
    }

    void PostOrder(){
        PostOrder(root);
    }

    void PostOrder(Node* node){
        if(node == NULL) return;
        PostOrder(node->left);
        PostOrder(node->right);
        cout<<node->data<<" ";
    }
    
    };





int main()
{
    Tree tree;
    tree.Insert(10);
        tree.Insert(20);
            tree.Insert(6);
                tree.Insert(7);
                    tree.Insert(100);
                        tree.Insert(29);
                            tree.Insert(32);
                                tree.Insert(120);
                                    tree.Insert(23);
                                        tree.Insert(11);

    cout<<"Preorder:";
    tree.PreOrder();
    cout<<endl;

    cout<<"InOrder:";
    tree.InOrder();
    cout<<endl;
    
    cout<<"PostOrder:";
    tree.PostOrder();
    cout<<endl;
    return 0;
}