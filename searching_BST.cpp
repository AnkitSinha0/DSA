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
Node* searcher(Node* root,int key){
  if(root == nullptr || root->data == key){
    return root;
  }
  if(root->data < key){
    return searcher(root->right , key);
  }else{ 
    return searcher(root->left , key);
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
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    (searcher(root,80)!= nullptr)? cout << "found!" : cout<< "not found";

}
