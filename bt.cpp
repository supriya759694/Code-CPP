#include<iostream>
using namespace std;
struct node{
int data;
node *left,*right;
};

class bst{
private:
    node *root;//memeber variable

    node* createNode(int data){//create node
    node *n=new node;
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
    }

    node* insertRoot(node *root,int data){//insert root in the  tree
        node *n=createNode(data);
    if(root==NULL)
        return n;

    if(root->data>data)
        root->left=insertRoot(root->left,data);
    else
        root->right=insertRoot(root->right,data);

    return root;
    }

    void inorderTraverse(node *root){//inorder traverse LNR
       if(root!=NULL){
        inorderTraverse(root->left);
        cout<<root->data<<" ";
        inorderTraverse(root->right);
       }
    }


    void preorderTraverse(node *root){//pre order traverse NLR
       if(root!=NULL){
        cout<<root->data<<" ";
        preorderTraverse(root->left);
        preorderTraverse(root->right);
       }
    }

    void postorderTraverse(node *root){//post order traverse LRN
       if(root!=NULL){
        postorderTraverse(root->left);
        postorderTraverse(root->right);
        cout<<root->data<<" ";
       }
    }


    node* searchRoot(node *root,int data){//search root
     if(root==NULL || root->data==data)
        return root;
     if(root->data>data)
        return searchRoot(root->left,data);
     else
        return searchRoot(root->right,data);
    }

    node* minValue(node *root){//MIN VALUE OF THE ROOT
    node *temp=root;
    while(temp->left !=NULL){
        temp=temp->left;
    }
    return temp;
    }


    node* maxValue(node *root){//MAX VALUE OF THE ROOT
    node *temp=root;
    while(temp->right !=NULL){
        temp=temp->right;
    }
    return temp;
    }



     //DELETION


node* deletebst(int data, node *root){
//base case
if(root==NULL)
   return NULL;

if(root->data==data){
    //0 child
     if(root->right==NULL && root->left==NULL){
        delete root;
        return NULL;
     }
    //1 child

   //left child
   if(root->left!=NULL && root->right==NULL){
     node *temp=root->left;
     delete root;
     return temp;
   }
     //right child
     if(root->right!=NULL && root->left==NULL){
        node *temp=root->right;
        delete root;
        return temp;
     }
    //2 child
   if(root->left!=NULL && root->right!=NULL){
    int mini=minValue(root->right)->data;
    root->data=mini;
    root->right=deletebst(mini,root->right);
    return root;
}
}
    else if(root->data>data)
    //left part
    root->left=deletebst(data,root->left);

    else
        //right part
        root->right=deletebst(data,root->right);


return root;
}

public:
    bst(){
    root=nullptr;
    }
    void insertData(int data){
    root=insertRoot(root,data);
    }

    void deletebst(int data){
    root=deletebst(data,root);
    }
    void inorder(){
      inorderTraverse(root);
    }

    void preorder(){
      preorderTraverse(root);
    }

    void postorder(){
      postorderTraverse(root);
    }

    bool searchRoot(int data){
       node *result=searchRoot(root,data);
       return result!=NULL;
    }

    void minValue(){//min value of the root
     int result=minValue(root)->data;
       cout<<result;
    }

    void maxValue(){//max value of the root
     int result=maxValue(root)->data;
       cout<<result;
    }


};

int main(){
 bst b1;
 b1.insertData(50);
 b1.insertData(40);
 b1.insertData(45);
 b1.insertData(30);
 b1.insertData(76);
 b1.insertData(70);
 b1.insertData(78);
 b1.insertData(20);
 b1.insertData(55);
 cout<<"\nInorder traverse"<<endl;
 b1.inorder();

 cout<<"\npreorder traverse"<<endl;
 b1.preorder();

 cout<<"\npostorder traverse"<<endl;
 b1.postorder();
if(b1.searchRoot(5))
    cout<<"\nroot is find"<<endl;
else
    cout<<"\nroot can't find"<<endl;


if(b1.searchRoot(50))
    cout<<"\nroot is find"<<endl;
else
    cout<<"\nroot can't find"<<endl;


    cout<<"\nmin value of the tree"<<endl;
    b1.minValue();
    cout<<"\nmax value of the tree"<<endl;
    b1.maxValue();


    b1.deletebst(50);
    cout<<"\nInorder traverse"<<endl;
 b1.inorder();

 cout<<"\npreorder traverse"<<endl;
 b1.preorder();

 cout<<"\npostorder traverse"<<endl;
 b1.postorder();
}
