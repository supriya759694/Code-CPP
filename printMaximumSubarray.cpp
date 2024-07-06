#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int>&a, int n){
long long maxi=INT_MIN;
long long sum=0;
int start=0;
int ansStart=-1,ansEnd=-1;
for(int i=0; i<n; i++){
        if(sum == 0)
        start=i;//startIndex

    sum =sum + a[i];

    if(sum>maxi){
       maxi=sum;
       ansStart=start;
       ansEnd=i;

    }

    if(sum<0)
        sum=0;

}
//printing subarray
cout<<"printed subarray"<<endl;
for(int i=ansStart; i<=ansEnd; i++){
    cout<<a[i]<<" ";
}
return maxi;
}
int main(){
vector<int>a={-2,1,-3,4,-1,2,1,-5,4};
int n=a.size();
long long a1=maxSubarraySum(a,n);
cout<<"\nlongest subarray sum = "<<a1<<endl;
return 0;
}
