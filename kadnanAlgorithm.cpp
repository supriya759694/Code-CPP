#include<bits/stdc++.h>
using namespace std;
 long long maxSubarraySum(vector<int> &a,int n){
 long long maxi=0,sum=0;
 for(int i=0;i<n; i++){
    sum =sum+a[i];
if(sum>maxi)
    maxi=sum;

if(sum<0)
  sum=0;
 }
 return maxi;
 }

int main(){
vector<int>a={-2,1,-3,4,-1,2,1,-5,4};
int n=a.size();
long long maxSum = maxSubarraySum(a,n);
cout<<maxSum<<endl;
return 0;
}
