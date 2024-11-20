#include <iostream>
using namespace std;
struct node{
int data;
node* left , *right;
node(int key){
data = key ;
left = nullptr;
right = nullptr;}
};
void printInorder(node* Node){
if(Node == nullptr){
return;}
printInorder(Node->left);
cout<<Node->data<<" ";
printInorder(Node->right);

}
int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    if (root == nullptr) {
        cout << "tree empty" << endl;
    } else {
        printInorder(root);
    }
}

