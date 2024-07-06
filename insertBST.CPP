#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
int data;
node *left,*right;
};

class BST{
private :
    node *root;
public :
    BST()
    {
        root=NULL;
    }
    void insertBST(node *root,int value){
    if(root==NULL)
    {
      node *n=new node;
      n->left=NULL;
      n->data=value;
      n->right=NULL;
      root=n;
    }
     else
        {
        bool flag=true;
     node *par=root;
     while(flag)
     {
         if(par->data>value)
         {
             if(par->left==NULL){
                par->left=node *n;
                n->left=NULL;
                n->data=value;
                n->right=NULL;
                flag=false;

         }
         else
            par=par->left;

         }
          if(par->data<value)
         {
             if(par->right==NULL){
                par->right=node *n;
                n->left=NULL;
                n->data=value;
                n->right=NULL;
                flag=false;

         }
         else
         par=par->right;


     }
     }

        }
        node* inorder(node *root)
        {
            if(root==NULL)
                return;
            else
                {
                inorder(root->left);
                cout<<root->data<<" ";
                inorder(root->right)

                }
        }
    }
};


int main()
{
    node *root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    inorder(root);
    cout<<endl<<" ";

}
