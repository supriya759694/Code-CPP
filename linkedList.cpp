#include<iostream>
using namespace std;
struct node{//node datatype
int info;
node *next;
};
struct node *start=NULL;
struct node* createNode(){
struct node *temp;
temp=new node;
return temp;
};

void insertnode(){
int data;
struct node *temp,*t;
temp=createNode();
cout<< "enter the data"<<endl;
cin>>data;
temp->info=data;
temp->next=NULL;
//at the beginning
if(start==NULL)
    start=temp;
else{
    t=start;
    while(t->next){
        t=t->next;
    }
    t->next=temp;



}
}
int main(){

insertnode();
insertnode();
insertnode();
insertnode();

}
