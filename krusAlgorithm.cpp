#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool com(const vector<int>&a, const vector<int> &b){
 return a[2]<b[2];
}
//make set or initial step
void makeSet(vector<int> &parent,vector<int> &rank,int n){
for(int i=0;i<n;i++)
{
    parent[i]=i;//initial step
    rank[i]=0;//initial step

}
}

 int findParent(vector<int> &parent, int node)
 {
   //base case
   if(parent[node]==node)
        return node;

   return parent[node]=findParent(parent,parent[node]);
 }

 void unionSet(int u, int v, vector<int> &parent, vector<int> &rank){
 u=findParent(parent,u);
 v=findParent(parent,v);

 if(rank[u] < rank[v])
   parent[u]=v;

 else if(rank[v] < rank[u])
   parent[v]=u;

  else {
    parent[v]=u;
    rank[u]++;
  }
 }


 int minimumSpanningTree(vector<vector<int>> &edges, int n){
 sort(edges.begin(),edges.end(),com);
 vector<int>parent(n);
 vector<int> rank(n);
 makeSet(parent,rank,n);

 int minWeight=0,ans=0;
 for(int i=0;i<edges.size();i++){
    int u=findParent(parent,edges[i][0]);
    int v=findParent(parent,edges[i][1]);
    int wt=edges[i][2];
    if(u != v){
        minWeight=minWeight+wt;
        unionSet(u,v,parent,rank);
         ans += wt;
         cout << u << " -- " << v << " == " << wt << endl;
    }
 }
    return minWeight;

 }

 int main() {
    vector<vector<int>> edges = {{0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}};
    int n = 4;
    int minWeight = minimumSpanningTree(edges, n);
    cout << "Minimum Spanning Tree Weight: " << minWeight << endl;
    return 0;
}

