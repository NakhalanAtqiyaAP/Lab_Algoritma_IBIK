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


int main()
{
    Node* node = new Node(17);
    node->left = new Node(41);
    node->left->left = new Node(64);
    node->left->left->left = new Node(22);
    node->left->left ->right = new Node(31);

    node->right = new Node(20);
    node->right->left = new Node(23);
    node->right->left->left = new Node(47);
    node->right->left->right = new Node(56);
    node->right->right = new Node(33);

    cout<<node->right->left->right->data<<' ';
    cout<<node->right->right->data<<' ';
    cout<<node->left->left->right->data<<' ';
    

    return 0;
}