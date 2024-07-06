#include<iostream>
using namespace std;

//class 1
class treeNode{
public:
    treeNode *left,*right;
    int data;
    treeNode(){//constructor
        left=NULL;
        right=NULL;
        data=0;
    }

    treeNode(int value){//parametarized constructor
        left=NULL;
        right=NULL;
        data=value;
    }
};

//class 2
class AVLtree{
public:
    treeNode *root;//member variable
    AVLtree(){//constructor
        root=NULL;
    }
    bool isEmpty(){//isEmpty function
        return root == NULL;
    }

    //Get Height
    int height(treeNode *r){
        if(r==NULL){
            return -1;
        }
        else{
            int lheight=height(r->left);
            int rheight=height(r->right);
            if(lheight>rheight)
                return (lheight+1);
            else
                return (rheight+1);
        }
    }

    //get balance factor
    int getbalanceFactor(treeNode *r){
        if(r==NULL)
            return -1;
        else{
            return height(r->left) - height(r->right);
        }
    }


    treeNode* rightRotate(treeNode *r){//right rotate for LEFT LEFT Imbalanced
        //LEFT LEFT IMMBALANCED
        treeNode *y=r->left;
        treeNode *t=y->right;
        //RIGHT_ROTATE PERFORM
        y->right=r;
        r->left=t;
        return y;
    }

    //left rotation
    treeNode* lefttRotate(treeNode *r){//right rotate for LEFT LEFT Imbalanced
        //right right IMMBALANCED
        treeNode *y=r->right;
        treeNode *t=y->left;
        //RIGHT_ROTATE PERFORM
        y->left=r;
        r->right=t;
        return y;
    }

    treeNode* insertNode(treeNode *r, treeNode *new_node){
        if(r==NULL){
            r=new_node;
            cout<<"Node inserted Successfully"<<endl;
            return r;

        }
        if(new_node->data<r->data)
            r->left=insertNode(r->left,new_node);
        else if(new_node->data>r->data)
            r->right=insertNode(r->right,new_node);
        else{
            cout<<"No Duplicate value allow "<<endl;
            return r;
        }
        int bf=getbalanceFactor(r);
        //left left Imbalanced case
        if(bf>1 && r->left->data>new_node->data)
            return rightRotate(r);
        //right right Imbalanced case
        if(bf<-1 && r->right->data<new_node->data)
            return lefttRotate(r);
        //left right Imbalanced case
        if(bf>1 && r->left->data<new_node->data){
            r->left=lefttRotate(r->left);
            return rightRotate(r);
        }
        //right left Imbalanced case
        if(bf<-1 && r->right->data>new_node->data){
            r->right=rightRotate(r->right);
            return lefttRotate(r);
        }
        return r;//return the unchanged node pointer
    }

    treeNode* minValue(treeNode *r){//loop down to find leftmost leaf
        treeNode *temp=r;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        return temp;
    }

    //DELETION CASE
    treeNode* deleteNode(treeNode *r,int data){
        //BASE CASE
        if(r==NULL){
            return r;
        }
        if(r->data==data){
            //0 child
            if(r->left==NULL && r->right==NULL){
                delete r;
                return NULL;
            }
            //1 child
            //left child
            if(r->left!=NULL && r->right==NULL){
                treeNode *temp=r->left;
                delete r;
                return temp;
            }

            //right child
            if(r->left==NULL && r->right!=NULL){
                treeNode *temp=r->right;
                delete r;
                return temp;
            }
            //2 child
            if(r->left!=NULL && r->right!=NULL){
                int mini=minValue(r->right)->data;
                r->data=mini;
                r->right=deleteNode(r->right,mini);
            }
        }
        else if(r->data>data)
            r->left=deleteNode(r->left,data);
        else
            r->right=deleteNode(r->right,data);

        int bf=getbalanceFactor(r);
        //left left imbalance or right rotation
        if(bf == 2 && getbalanceFactor(r->left) >= 0)
            return rightRotate(r);
        //left right imbalance or right rotation
        else if(bf == 2 && getbalanceFactor(r->left) == -1){
            r->left=lefttRotate(r->left);
            return rightRotate(r);
        }
        // right right imbalance or right rotation
        else if(bf == -2 && getbalanceFactor(r->right) <= 0){
            return lefttRotate(r);
        }
        // right left imbalance or right rotation
        else if(bf == -2 && getbalanceFactor(r->right) == 1){
            r->right=rightRotate(r->right);
            return lefttRotate(r);
        }
        return r;
    }

    void preorder(treeNode *r){
        if(r==NULL)
            return;
        cout<<r->data<<" ";
        preorder(r->left);
        preorder(r->right);
    }
    void inorder(treeNode *r){
        if(r==NULL)
            return;
        inorder(r->left);
        cout<<r->data<<" ";
        inorder(r->right);
    }

    void postorder(treeNode *r){
        if(r==NULL)
            return;
        postorder(r->left);
        postorder(r->right);
        cout<<r->data<<" ";
    }

    treeNode* searchNode(treeNode *r, int data){//recursive search
        if(r==NULL || r->data==data)
            return r;
        else if(r->data>data)
            return searchNode(r->left,data);
        else
            return searchNode(r->right,data);
    }

    void printLevelOrderBFS(treeNode *r){
        int h= height(r);
        for(int i=0;i<=h;i++){
            printLevel(r,i);
        }
    }

    void printLevel(treeNode *r,int level){
        if(r==NULL)
            return;
        else if(level==0)
            cout<<r->data<<" ";
        else{//level>0
            printLevel(r->left,level-1);
            printLevel(r->right,level-1);
        }
    }
};


int main(){
    AVLtree obj;
    int option,val;
    do{
        cout<<"what operation do you want to perform"<<endl;
        cout<<"select option number : "<<endl;
        cout<<"1. Insert data "<<endl;
        cout<<"2. search data "<<endl;
        cout<<"3. delete data"<<endl;
        cout<<"4. Print Level Order BFS"<<endl;
        cout<<"5. Print_preorder"<<endl;
        cout<<"6. Print_inorder"<<endl;
        cout<<"7. Print_postorder"<<endl;
        cout<<"8. Tree Height"<<endl;
        cout<<endl;
        cin>>option;
        treeNode *newNode=new treeNode();
        switch(option){
            case 0:
                break;
            case 1:
                cout<<"AVL insert"<<endl;
                cout<< "insert value to the AVL tree"<<endl;
                cin>>val;
                newNode->data=val;
                obj.root=obj.insertNode(obj.root,newNode);
                cout<<endl;
                break;
            case 2:
                cout<< "search "<<endl;
                cout<<"enter data to Search data in AVL tree"<<endl;
                cin>>val;
                newNode=obj.searchNode(obj.root,val);
                if(newNode!=NULL)
                    cout<<"value found"<<endl;
                else
                    cout<<"value is not found"<<endl;
                break;
            case 3:
                cout<<"Delete operation performed in AVL tree"<<endl;
                cout<< "delete value from the AVL tree"<<endl;
                cin>>val;
                newNode=obj.searchNode(obj.root,val);
                if(newNode!=NULL){
                    obj.root=obj.deleteNode(obj.root,val);
                    cout<<"value deleted successfully"<<endl;
                }
                else{
                    cout<<"Value not found"<<endl;
                }
                break;
            case 4:
                cout<<"Print Level Order BFS"<<endl;
                obj.printLevelOrderBFS(obj.root);
                break;
            case 5:
                cout<<"print preorder traverse"<<endl;
                obj.preorder(obj.root);
                break;
            case 6:
                cout<<"print inorder traverse"<<endl;
                obj.inorder(obj.root);
                break;
            case 7:
                cout<<"print postorder traverse"<<endl;
                obj.postorder(obj.root);
                break;
            case 8:
                cout<<"Tree height"<<endl;
                cout<<"Height : "<< obj.height(obj.root)<<endl;
                break;
            default:
                cout<<"enter proper option number"<<endl;
                break;
        }
    }
    while(option!=0);
    return 0;
}

