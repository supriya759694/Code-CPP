#include<bits/stdc++.h>
using namespace std;
int LongestSubArraySumK(vector<int>arr, int n, int k){
    int cnt=0;
for(int i=0; i<n; i++){
    int sum=0;
    for(int j=i; j<n; j++){
       sum=sum+arr[j];

       if(sum == k){
         cnt++;
       }
    }
}
return cnt;
}

int main(){
vector<int>arr={3,1,2,4};
int n=arr.size();
int k=6;
int Subarray=LongestSubArraySumK(arr,n,k);
cout<<Subarray<<endl;
return 0;
}
