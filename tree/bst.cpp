#include<iostream>
#include<stdio.h>
using namespace std;
 class BST{
 private :
     BST *left,*right;
     int data;
 public :
    BST();
    BST(int );
    BST* insert(BST* ,int );
    void inorder(BST* );
 };
 BST ::BST()
 {
     data=0;
     left=NULL;
     right=NULL;
 }
 BST :: BST(int value){
 data=value;
 left=NULL;
 right=NULL;

 }
 BST* BST :: insert(BST *root,int value){

 if(root==NULL)
 {
     BST *n=new BST(value);
     root=n;
 }
 else if(root->data>value)
 {
     root->left=insert(root->left,value);
 }
 else
 {
     root->right=insert(root->right,value);
 }
 return root;
 }

 void BST ::inorder(BST *root){
 if(root==NULL)
    return ;
 else
    {
    inorder(root->left);
 cout<<root->data<<endl;
 inorder(root->right);
    }
 }
 int main()
 {
     BST *root=NULL,b;
     root=b.insert(root,50);
     b.insert(root,30);
     b.insert(root,20);
     b.insert(root,69);
     b.insert(root,22);
     b.inorder(root);

 }


