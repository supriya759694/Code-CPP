#include<iostream>
using namespace std;
//node datatype
struct node{
int item;
node *next;
};
class sll{
private:
   node *start;
public:
    sll();//constructor
    sll(sll& );//copy constructor
    sll& operator=(sll& );//copy assignment operator
    void insertatFirst(int );
    void insertatlast(int )
    void insertAfter(node* , int );
    node* search(int );
    void deleteatFirst();
    void deleteAtLast();
    void deleteNode(node* );
    ~sll();
};
sll ::sll(){
start=NULL;
}
//insert node at first in the list
void sll::insertatFirst(int data){
//prepare node
node *n=new node;
n->item=data;
n->next=start;
start=n;

}
void sll::insertatlast(int data)
{ //prepare node
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
        start=n;
    else{
    node *t=start;
    while(t->next)
    {
        t=t->next;
    }
    t->next=n;

}
}
void sll::insertAfter(node *r , int data){


}
