#include<bits/stdc++.h>
using namespace std;
int LongestSubarraySumk(vector<int> &a,int n, int k){
map<int,int>preSumMap;
int sum=0;
int maxLen=0;
for(int i=0;i<n; i++){
    sum =sum+a[i];

    if(sum == k)
        maxLen =max(maxLen, i+1);

int rem=sum - k;
if(preSumMap.find(rem)!= preSumMap.end()){
    int len =i-preSumMap[rem];
    maxLen =max(maxLen,len);
}

if(preSumMap.find(rem) == preSumMap.end()){
    preSumMap[sum]=i;
}
}
return maxLen;
}
int main(){
vector<int>a={2,3,5,7,1,8};
int n=a.size();
int k=7;
int length=LongestSubarraySumk(a,n,k);
cout<<length<<endl;
return 0;
}

