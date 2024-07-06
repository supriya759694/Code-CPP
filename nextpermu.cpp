
//next permutation which directly returns the lexicographically next greater permutation of the input.
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>a={2,1,3};
next_permutation(a.begin(),a.end());
int n=a.size();
for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}
