#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>&a,int n,int target){
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(a[i]+a[j] == target)
            return {i,j};
    }
}
return {};
}

int main(){
vector<int>a={2,6,5,8,11};
int n=a.size();
int target=14;
vector<int>ans=twoSum(a,n,target);
if(!ans.empty()){
    cout<<"pair is ["<<ans[0]<<","<<ans[1]<<"]"<<endl;
}
 else{
    cout<<"not found such pair"<<endl;
}
return 0;
}
