#include<bits/stdc++.h>
using namespace std;
void Sort0s1s2s(vector<int> &arr,int n){
int cnt0=0,cnt1=0,cnt2=0;
for(int i=0; i<n; i++){
    if(arr[i] == 0)
        cnt0++;
    else if(arr[i]==1)
        cnt1++;
    else
        cnt2++;

}
for(int j=0; j<cnt0; j++)
    arr[j]=0;

for(int j=cnt0; j<cnt0+cnt1; j++)
    arr[j]=1;
for(int j=cnt0+cnt1; j<n; j++)
    arr[j]=2;

}


int main(){
vector<int>a={0,1,2,1,1,0,0,2,1};
int n=a.size();
Sort0s1s2s(a,n);
for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
return 0;
}
