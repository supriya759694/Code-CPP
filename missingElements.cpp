#include<bits/stdc++.h>
using namespace std;
int MissingNumber(vector<int>&a1,int n){
int total=(n*(n+1))/2;
int sum=0;
for(int i=0;i<n-1; i++){
    sum=sum+a1[i];
}
int miss=total -sum;
return miss;
}
int main(){
vector<int>a1={1,6,4,5,3,7,8};
int n=a1.size();
int missingNo= MissingNumber(a1,n);
cout<<"missing number in the array : "<<missingNo<<endl;
return 0;
}
