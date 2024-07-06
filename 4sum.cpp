
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>triplet(int n,vector<int> &arr, int target){
set<vector<int>>st;
for(int i=0; i<n; i++){
         set<long long>hashset;
    for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
        long long sum=arr[i]+arr[j];
         sum=sum+arr[k];

         long long fourth=target-sum;
        //find element
        if(hashset.find(fourth) != hashset.end()){
            vector<int>temp={arr[i],arr[j],arr[k],fourth};
            sort(temp.begin(), temp.end());
            st.insert(temp);
        }

        hashset.insert(arr[k]);
    }
}
}
vector<vector<int>>ans(st.begin(),st.end());
return ans;
}


int main(){
vector<int>arr={4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
int n=arr.size();
int target=9;
vector<vector<int>>ans=triplet(n,arr,target);
for(auto it : ans){
    cout<<"[";
    for(auto i:it)
        cout<<i<<" ";
    cout<<"]";
    cout<<endl;
}
cout<<endl;
}

