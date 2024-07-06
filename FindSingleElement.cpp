#include<bits/stdc++.h>
using namespace std;
int SingleElement(vector<int> &a1,int n){
    int xorr = 0;
    for(int i=0; i<n; i++){
        xorr = xorr ^ a1[i];
    }
    return xorr;
}

int main(){
vector<int>a1={4,1,2,1,2,5,9,5,9};
int n=a1.size();
int singleValue=SingleElement(a1,n);
cout<<singleValue;
return 0;
}
