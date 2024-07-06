#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>a1={3,2,1};
int n=a1.size();
next_permutation(a1.begin(),a1.end());
for(int i=0;i<n;i++){
    cout<<a1[i]<<" ";
}
cout<<endl;
}
