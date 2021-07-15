//https://www.acmicpc.net/problem/5639

#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* insert_Node(Node *node, int data){
    if (node == NULL){
        node = new Node();
        node -> data = data;
        node -> left = NULL;
        node -> right = NULL;
    }
    else if (node -> data <= data)
        node -> right = insert_Node(node -> right, data);
    else
        node -> left = insert_Node(node -> left, data);
    return node;
}

void postorder(Node *node){
    if (node -> left != NULL)
        postorder(node -> left);
    if (node -> right != NULL)
        postorder(node -> right);
    cout << node -> data << "\n";
}

int main()
{
    int n;
    Node *root = NULL;
    while(cin >> n){
        if (n == EOF) break;
        root = insert_Node(root, n);
    }
    postorder(root);
}
