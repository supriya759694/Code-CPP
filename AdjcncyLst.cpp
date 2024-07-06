//Graph - Adjacency list
#include<bits/stdc++.h>
using namespace std;
struct node{//node structure
int vertex;
int item;
node *next;
};

//class 1
class Adjlist{
private :
    int vertex;
    node* start;
public :
    Adjlist(){//constructor
    vertex=0;
    start=NULL;
    }

    Adjlist(int v){//Constructor 2
    vertex=v;
    start=NULL;
    }

    node* getStart(){
    return start;
    }
    void setVertex(int v){
    vertex=v;
    }
    void addNode(int v, int data){
    node *temp=new node;
    temp->vertex=v;
    temp->item=data;
    temp->next=start;
    start=temp;
    }
    void removeFirstNode(){
    if(start){
        node *temp=start;
        delete temp;
        start=start->next;
    }
    }
    //print
    void print(){
    node *temp=start;
    while(temp){
        cout<<temp->item<<" : "<<"v"<<temp->vertex<<" , ";
        temp=temp->next;
    }
    }


};


//2nd class
class graph{
private :
    int v_count;
    Adjlist *arr;

public:
    // create list

    void createList(int vno){
    v_count=vno;
    int n,data,v;
    arr=new Adjlist[v_count];
    for(int i=0 ; i<v_count; i++){
        arr[i].setVertex(i);
        cout<<"Adjacency nodes of V"<<i <<endl;
        cin>>n;
        for(int j=0; j<n; j++){
            cout<<"enter vertex no and data"<<endl;
            cin>>v>>data;
            arr[i].addNode(v,data);
        }
    }
    }

    //printList
    void printList(){
    for(int i=0;i<v_count;i++){
        cout<<endl;
        cout<<"v"<<i<<"-> ";
        arr[i].print();
    }
    }
};
int main(){
graph g;
g.createList(4);
g.printList();
}
