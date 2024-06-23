
#include<iostream>
using namespace std;

    template <typename T>
    class BinaryTreeNode
    {
    public:
        T data;
        BinaryTreeNode<T> *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
    };



bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    else if(root->data < x){
        searchInBST(root->right,x);
    }
    else{
        searchInBST(root->left,x);
    }
}