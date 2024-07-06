#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//print MSt
void printMst(vector<int> &parent,vector<int,<vector<int>> &graph, int n){
for(int i=1;i<n i++){
        cout<<"edges \t weight"<<endl;
    cout<<parent[i] <<" - "<<i<<graph[i]
}
}


//minimum key from the key array
int minKey(vector<int> &key,vector<bool> &mstSet, int n){
int minIndex=0, min=INT_MAX;
for(int i=0;i<n;i++){
    if(mstSet[i]==false && key[i]<min){
        min=key[i];
        minIndex=i;
    }

}
return minIndex;
}
primMst(vector<int,vector<int>> &graph, int n){
//you need 3 array 1. parent array 2. store key 3. msttable is false or true

//PARENT ARRAY
vector<int> parent(n);
vector<int> key(n);
vector<bool>mstSet(n);

for(int i=0;i<n;i++){
    key[i]=INT_MAX;
    mstSet[i]=false;
}

key[0]=0;
parent[0]=-1;

for(int count=0;count<n-1;count++){
    int u=minKey(key,mstSet,n);
    mstSet[u]= true;

    for(int v=0;v<n;v++){
        if(graph[u][v] && !mstSet && graph[u][v] < key[v]){
            parent[v]=u;
            key[v]=graph[u][v];
        }
    }

}
printMst(parent,graph,n);
}



int main(){
int n=5;//vertices
vector<int,vector<int>>graph(n)={{0,2,0,6,0},{2,0,3,8,5},{0,3,0,0,7},{6,8,0,0,9},{0,5,7,9,0}};

primMst(graph, n);

}
