#include<bits/stdc++.h>
using namespace std;
class matrix{
private:
    int v_count;
    int edge;
    int **adj;
public:
    matrix(){//contructor
        v_count=0;
        adj=0;
    }

    int vertex_no()//count node/vertex number
    {
    return v_count;
    }

    //create adjacency matrix using graph
    void creatematrix(int vno,int e){
       v_count=vno;
       edge=e;
       int i,j,k,u,v;
       adj=new int*[v_count];
       for(i=0;i<v_count;i++){
        adj[i]=new int[v_count];
        for(j=0;j<v_count;j++){
            adj[i][j]=0;//by default value 0
        }
       }
       for(k=0;k<edge;k++){
         cout<<"enter connection between source to destination and create edges "<<endl;
         cin>>u>>v;
         if(adj[u][v]==0){
            adj[u][v]=1;
            adj[v][u]=1;
         }
    }
    }

    void printmatrix(){
    for(int i=0;i<v_count;i++){
        for(int j=0;j<v_count;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    void adjacency_matrix(int v){
        cout<<"adjacency of v"<<v<<" : ";
        for(int i=0;i<v_count;i++){
        if(adj[v][i]==1)
            cout<<"v"<<i;
    }
    }
};
int main(){
matrix m;
m.creatematrix(4,3);
m.printmatrix();
m.adjacency_matrix(1);
}
