#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>pascal(int n){
vector<vector<int>>result(n);
for(int i=0; i<n; i++){
    result[i]=vector<int>(i+1,1);
    for(int j=1; j<i; j++){
        result[i][j]=result[i-1][j]+result[i-1][j-1];
    }
}
return result;
}
int main(){
int n=5;
vector<vector<int>>ans=pascal(n);
for(auto it : ans){
    for(auto i : it)
        cout<<i<<" ";
    cout<<endl;
}
return 0;
}
