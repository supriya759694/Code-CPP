#include<bits/stdc++.h>
using namespace std;
//spiral matrix
vector<int> spiralMatrix(vector<vector<int>> &mat){
int n=mat.size();
int m=mat[0].size();
int top=0, left=0, right=m-1, bottom=n-1;
vector<int>ans;
//1st row print
while(left<=right && top<=bottom){
for(int i=left; i<=right; i++){
    ans.push_back(mat[top][i]);
}
top++; //top=1

for(int i=top; i<=bottom; i++){
    ans.push_back(mat[i][right]);
}
right--;//right=2

if(top<=bottom){//1<=3
    for(int i= right; i>=left; i--){
        ans.push_back(mat[bottom][i]);
    }
    bottom--;
}
if(left<=right){//0<=2
    for(int i= bottom; i>=top; i--){
        ans.push_back(mat[i][left]);
    }
    left++;//1
}
}

return ans;
}
int main(){
vector<vector<int>>mat={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
vector<int>ans=spiralMatrix(mat);
for(auto it :ans){
    cout<<it<<" ";
}

return 0;
}
