#include <iostream>
using namespace std;
struct Node{
int data;
Node* left;
Node* right;
Node(int x){
data = x;
left = nullptr;
right = nullptr;}
};
Node* insertion(Node* node,int key){

if(node == nullptr){
    return new Node(key);
}
if(node->data == key){
    return node;
}
if(node->data < key){
    node->right = insertion(node->right,key);
}else{
    node->left = insertion(node->left,key);

}

}


void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main(){
    Node* root = new Node(50);
    root = insertion(root, 30);
    root = insertion(root, 20);
    root = insertion(root, 40);
    root = insertion(root, 70);
    root = insertion(root, 60);
    root = insertion(root, 80);

    inorder(root);
}
