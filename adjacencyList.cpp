#include<bits/stdc++.h>
using namespace std;
struct node{
int item;
int vertex;
node *next;
};
class AdjList{
private:
    node *start;
    int vertex;
public:
    AdjList();
    AdjList(int );
    node* getStart();
    void setVertex(int );
    void addNode(int ,int );
    void removeFirstNode();
    void printList();
    ~AdjList();

};

void AdjList::removeFirstNode(){//remove node from the list
node *temp=start;
if(start){
  delete temp;
  start=start->next;
}
}
void AdjList:: addNode(int vertex,int data){//add node in the adjacent list
node *n=new node;
n->item=data;
n->vertex=vertex;
n->next=start;
start=n;
}

void AdjList::printList(){//print list
node *temp=start;
while(temp){
    cout<<temp->vertex<<","<<temp->item<<" ";
    temp=temp->next;
}
}
AdjList :: AdjList(){//contructor
start=NULL;
vertex=0;

}

AdjList :: AdjList(int v){//parametarized constructor
start=NULL;
vertex=v;

}

node* AdjList::getStart(){
return start;
}

void AdjList::setVertex(int v){
vertex=v;
}

//destructor
AdjList::~AdjList(){
while(start){
    removeFirstNode();
}
}


//2nd class
class graph{
private:
    int v_count;
    AdjList *arr;
public:
    graph(){
    v_count=0;
    arr=NULL;
    }
    int vertex_count(){
    return v_count;
    }

    //graph create
    void graphCreate(int vno){
    v_count=vno;
    int n,v,data;
    arr=new AdjList[v_count];
    for(int i=0;i<v_count;i++){
        arr[i].setVertex(i);
        cout<<"how many adjacent nodes of v"<<i<<" ";
        cin>>n;
        for(int j=0;j<n;j++){
            cout<<"enter vertex number"<<endl;
            cin>>v;
            cout<<"enter data"<<endl;
            cin>>data;
            arr[i].addNode(v,data);
        }
    }

    }

    void printGraph(){
      for(int i=0;i<v_count;i++){
        cout<<endl;
        arr[i].printList();
      }
    }
    ~graph(){
    delete []arr;
    }
};
int main(){
graph G;
    G.graphCreate(4);
    G.printGraph();
    cout<<endl;
    return 0;
}
