#include<bits/stdc++.h>
using namespace std;
vector<int> PrintLeads(vector<int> &a,int n){
vector<int>ans;
int maxi= a[n-1];
ans.push_back(maxi);
for(int i=n-1; i>=0; i++){
if(a[i] > maxi){
    maxi = a[i];
   ans.push_back(maxi);

}

}
return ans;
}
int main(){
vector<int>a={4,7,1,0};
int n=a.size();
vector<int>ans=PrintLeads(a,n);
int n1=ans.size();
for(int i=0;i<n1; i++)
    cout<<ans[i]<<" ";
return 0;
}
