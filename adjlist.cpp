#include<bits/stdc++.h>
using namespace std;
struct node{//node create
int vertex;
int item;
node *next;
};
//class 1
class Adjlist{
private:
    int vertex;
    node *start;
public:
   Adjlist(){//constructor
   vertex=0;
   start=NULL;
   }

   Adjlist(int v){//constructor 2
   vertex=v;
   start=NULL;
   }

   node* getStart(){
   return start;
   }
   void setVertex(int v){
   vertex=v;
   }

   void addNode(int v,int item){
   node *temp=new node;
   temp->item=item;
   temp->vertex=v;
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
   void print(){
  node *temp=start;
  while(temp){
    cout<<"v ->"<<vertex<<"= "<<temp->vertex<<" : "<<temp->item<<" ,  ";
    temp=temp->next;
  }
  }
~Adjlist(){
 while(start){
    removeFirstNode();
 }
}
};



//class 2
class graph{
private :
    int v_count;
    Adjlist *arr;
public:
  int v_counting(){
  return v_count;
  }

  //create adjacencylist using graph
  void createList(int vno){
  v_count=vno;
  int n,v,data;
  arr=new Adjlist[v_count];
  for(int i=0;i<v_count;i++){
    arr[i].setVertex(i);
    cout<<"adjacency nodes of v"<<i<<endl;
    cin>>n;
    for(int j=0;j<n;j++){
        cout<<"enter vertex_no"<<endl;
        cin>>v;
        cout<<"enter data"<<endl;
        cin>>data;
        arr[i].addNode(v,data);
    }

  }



  }

  void printList(){
for(int i=0;i<v_count;i++){
     cout<<endl;
   arr[i].print();

  }
  }
};
int main(){

graph g;
g.createList(4);
g.printList();
return 0;
}
