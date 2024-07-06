//Rearrange the Array elements by sign
/*a[]={1,2,3,-2,-1};
output : {1,-2,2,-1,2,3};**/
#include<bits/stdc++.h>
using namespace std;
vector<int> RearrangeArray(vector<int> &a,int n){
vector<int>ans(n);
int posIndex=0,negIndex=1;
for(int i=0; i<n; i++){
    if(a[i]>0){
        ans[posIndex]=a[i];
        posIndex +=2;
    }
    else{
        ans[negIndex]=a[i];
        negIndex +=2;
    }
    }
    return ans;
}


int main(){
vector<int>a={1,2,3,-2,-1};
int n=a.size();
vector<int>ans =RearrangeArray(a,n);
 for(int i=0;i<n;i++){
cout<<ans[i]<<" ";
}
}
