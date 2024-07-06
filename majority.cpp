#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>&arr, int n){
    map<int,int>mpp;
    vector<int>ans;
for(int i=0; i<n; i++){
   mpp[arr[i]]++;
}

for(auto it : mpp){
    if(it.second > n/3)
        ans.push_back(it.first);
}
return ans;
}
int main(){
vector<int>arr={11,33,33,11,33,11};
int n=arr.size();
vector<int>ans=majorityElement(arr,n);
for(auto it:ans){
    cout<<it<<" ";
}
cout<<endl;
return 0;
}
