#include<bits/stdc++.h>
//#include "dynamicArray.cpp"
using namespace std;
class graph{
private:
    int v_count;
    int e_count;
    int **adj;
public:
    int v_counting();
    int e_counting();
    void createGraph(int ,int );
    void printgraph();
    void printAdjacentNodes(int );
    //dynamicArray& adjacentNodes(int);
    bool isIsolated(int );
    //~graph();


};

//isolated or not
bool graph::isIsolated(int v){
bool flag=true;
for(int i=0;i<v_count;i++){
    if(adj[v][i]==1){
        flag=false;
        break;
    }

}
return flag;
}


void graph::printAdjacentNodes(int v){
cout<<"adjacency nodes of v"<<v<<" : ";
 for(int j=0;j<v_count;j++){
        if(adj[v][j]==1)
        cout<<"v"<<j<<endl;
    }
 cout<<endl;
}

//print graph
void graph::printgraph(){

for(int i=0;i<v_count;i++){
    for(int j=0;j<v_count;j++){
        cout<<adj[i][j]<<" ";
    }
cout<<endl;
}
}
int graph::v_counting(){//nodes counting
 return v_count;
}

int graph::e_counting(){//edges counting
return e_count;
}

//graph creating
void graph::createGraph(int n,int e){
v_count=n;
e_count=e;
adj = new int*[v_count];
for(int i=0;i<v_count;i++){
    adj[i]=new int[v_count];
for(int j=0; j<v_count; j++){
        adj[i][j]=0;
}
}
int u,v;
for(int k=0; k < e_count; k++){
    cout<<"enter nodes numbers connecting through edges"<<endl;
    cin>> u >> v;
    adj[u][v]=1;
    adj[v][u]=1;


}
}
int main(){
graph g;
g.createGraph(6,8);
g.printgraph();
g.printAdjacentNodes(2);
}
