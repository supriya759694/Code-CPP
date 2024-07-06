//BST recursively
#include<iostream>
#include <stdio.h>
using namespace std;
class BST{
private:
int data;
BST *left,*right;
public :
    //default consturctor
    BST();
    //parametarized constructor
    BST(int );
//Insert function
BST* insert(BST* ,int );
//inorder traversal
void inorder(BST* );

};
//defination of default Constructor
BST ::BST()
{
    data=0;
    left=NULL;
    right=NULL;
}
BST ::BST(int value)
{
    data=value;
    left=NULL;
    right=NULL;
}
 BST* BST:: insert(BST* root,int value)
{
    if(root==NULL)
    {
        BST *N=new BST(value);
        return N;
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
void BST :: inorder(BST *root)
{
    if(root==NULL)
        return;
    else{
        inorder(root->left);
        cout<<root->data<<" "<<endl;
        inorder(root->right);
    }
}
int main()
{
    BST *root=NULL,b;
    root=b.insert(root,50);
    b.insert(root,30);
    b.insert(root,20);
    b.insert(root,40);
    b.insert(root,70);
    b.insert(root,60);
    b.insert(root,80);
    b.inorder(root);
    return 0;

}
