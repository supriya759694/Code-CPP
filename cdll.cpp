#include<iostream>
using namespace std;
struct node{
node *prev;
int data;
node *next;
};

class cdll{
private:
    node *start;
public:
    cdll();
    node* createNode(int );
    void insertFirst(int );
    void traverse();
    void insertLast(int );
    node* search(int );
    void insertAfter(int , int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(int );
    /*~cdll();*/

};
cdll::cdll(){//constructor
start=NULL;
}

node* cdll::createNode(int data){//create the  node
node *n=new node;
n->prev=NULL;
n->data=data;
n->next=NULL;
return n;
}
void cdll::deleteFirst(){
if(start==NULL)
{
    cout<< "empty list "<<endl;
}

node *temp=start;
if(temp->next==start){
    start=NULL;
    delete temp;
}
else{
    start=temp->next;
    start->prev=temp->prev;
    temp->prev->next=start;
    delete temp;
}
}
void cdll::deleteNode(int data){
node *t=search(data);
if(t!=NULL){
    if(t==start)
        deleteFirst();
    else if(t==start->prev)
        deleteLast();
    else{
        t->prev->next=t->next;
        t->next->prev=t;
        delete t;
    }
}
}
void cdll::deleteLast(){
if(start==NULL)
{
    cout<< "empty list "<<endl;
}

node *temp=start;
if(temp->next==start){
    start=NULL;
    delete temp;
}
temp=temp->prev;
start->prev=temp->prev;
temp->prev->next=start;
delete temp;
}
void cdll::insertFirst(int data){//insert data first to the list
node *n=createNode(data);
if(start==NULL){
    n->prev=n;
    n->next=n;
    start=n;
}
else{
    node *temp=start;
    n->prev=temp->prev;
    n->data=data;
    n->next=start;
    start->prev->next=n;
    start->prev=n;
    start=n;
}
}

void cdll::traverse(){
if(start==NULL){
    cout<<"Empty list"<<endl;
    return;
}
node *temp=start;
while(temp!=start->prev){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<temp->data<<" ";
}

void cdll::insertLast(int data){//insert at the last of the list
node *n=createNode(data);
if(start==NULL){
    n->prev=n;
    n->next=n;
    start=n;
}
else{
    node *temp=start;
    n->prev=temp->prev;
    n->data=data;
    n->next=start;
    start->prev->next=n;
    start->prev=n;

}

}


node* cdll:: search(int data){
if(start==NULL){
    cout<<"node is not present in the list"<<endl;

}
node *temp=start;
while(temp!=start->prev){
        if(temp->data==data)
        return temp;
    temp=temp->next;
}
if(temp->data==data)
    return temp;

return NULL;
}
void cdll::insertAfter(int data1, int data2){
node *n,*t;
n=createNode(data2);
t=search(data1);
if(t==NULL){
    cout<<"node is not present in this node"<<endl;
}
if(t!=NULL){
    if(t==start->prev){
        insertLast(data2);
        return;
    }
    n->prev=t;
    n->data=data2;
    n->next=t->next;
    t->next->prev=n;
    t->next=n;
}

}
int main(){

cdll obj1;
obj1.insertFirst(20);
obj1.insertFirst(30);
obj1.insertFirst(40);

obj1.insertLast(11);
obj1.insertLast(12);
obj1.insertLast(13);
obj1.insertAfter(13,14);
obj1.insertAfter(40,50);
obj1.deleteFirst();
obj1.deleteLast();
obj1.deleteNode(20);
obj1.traverse();
}
