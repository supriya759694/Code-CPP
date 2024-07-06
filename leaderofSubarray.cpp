#include<bits/stdc++.h>
using namespace std;
vector<int> leadersOfSubarray(vector<int> &a,int n){
vector<int>ans;
int maxi=INT_MIN;
//ans.push_back(maxi);
for(int i=n-1; i>=0; i--){
    if(a[i]>maxi)
    {
        maxi=a[i];
        ans.push_back(maxi);

    }
}
reverse(ans.begin(),ans.end());
return ans;
}
int main(){
vector<int>a={4,7,1,0};
int n=a.size();
vector<int>ans= leadersOfSubarray(a,n);
int n1=ans.size();
for(int i=0; i<n1; i++)
    cout<<ans[i]<<" ";
}
