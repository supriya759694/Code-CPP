//find majority element that occurs more than n/2 times
#include<bits/stdc++.h>
using namespace std;
int MajorityElementMore(vector<int> &a,int n){
unordered_map<int,int>mpp;
for(int i=0;i<n; i++){
mpp[a[i]]++;
}

for(auto it : mpp){
    if(it.second > (n/2))
        return it.first;
}
return -1;
}


int main(){
vector<int>a={2,2,1,1,1,2,2};
int n=a.size();
int x=MajorityElementMore(a,n);
cout<<"majority element that occurs more than n/2 times is : "<<x<<endl;
return 0;
}
