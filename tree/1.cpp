#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
node *left;
node *right;
int data;
};
class BST{
node *root;
BST(int data)
{
    root->left=NULL;
    root->data=data;
    root->right=NULL;
}
void IsEmpty();
node* insertBST(int ,node* );


};
void BST:: IsEmpty()
{
    if(root==NULL)
        return;
}
node* BST::insertBST(int data,node *root)
{
    //case-1
    if(root==NULL)
    return new node(data);
        //case 2
    if(root->data>data)
    {
        root->left=insertBST(root->left,data);

    }
    else
    {
        root->right=insertBST(root->right,data);
    }
    return root;
}
//Preorder
void preorder(node *root)
{
    if(root==NULL)
        return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
//Inorder
void inorder(node *root){
if(root==NULL)
    return NULL;
else{
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
}
//postorder
void postorder(node *root)
{
    if(root==NULL)
    return NULL;
    else
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

/* --------------------------------Delete BST-----------------------------------------------
--> case -1 leaf node delete
 -->case -2 node has one child
 -->case -3 node has two child
 */
 node* inorderSucc(node *root)
 {
     node *curr=root;
     while(curr && curr->left!=NULL)
     {
         curr=curr->left;

     }
     return curr;
 }
 node* deleteInBST(node *root,int key)
 {
     if(key<root->data)
        root->left=deleteInBST(root->left,key);
     else if(key>root->data)
        root->right=deleteInBST(root->right,key);
     else
     {
         if(root->left==NULL){
            node *temp=root->right;
            delete root;
            return temp;
     }
     else if(root->right==NULL)
     {
         node *temp=root->left;
         delete (root);
         return temp;
     }
     //case -3
     node *temp=inorderSucc(root->right);
     root->data=temp->data;
     root->right=deleteInBST(root->right,temp->data);

     }
     return root;
 }

int main()
{
    node *root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    //print inorder
    inorder(root);
    cout<<endl;
    return 0;
}




}
}
