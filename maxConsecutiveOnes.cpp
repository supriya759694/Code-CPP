#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(vector<int> &a1,int n){
    int cnt=0,maxi=0;
for(int i=0; i<n; i++){
    if(a1[i] == 1)
    {
       cnt++;
    }
    else{
        cnt=0;
    }
    maxi=max(cnt,maxi);
}
return maxi;
}

int main(){
vector<int>a1 ={1,1,1,1,5,9,5,0,1,1,1,5,9,1,1,1,1,1,8};
int n=a1.size();
int maxConsecutive = maxConsecutiveOnes(a1,n);
cout<<"max Consecutive Ones is "<<maxConsecutive<<endl;
return 0;

}
