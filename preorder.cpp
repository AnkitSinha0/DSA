#include <iostream>
using namespace std;
struct node{
int data;
node* left;
node* right;
node(int x){
data = x;
left = nullptr;
right = nullptr;
}
};
void preordertraverse(node* root){
if(root == nullptr){
    return;
}

cout<<root->data<<"  ";
preordertraverse(root->left);


preordertraverse(root->right);
}
int main(){
node* root = new node(1);
root->left = new node(2);
root->right = new node(3);
root->left->left = new node(4);
root->left->right = new node(5);
root->right->left = new node(6);
root->right->right = new node(7);

preordertraverse(root);


}