#include<bits/stdc++.h>
using namespace std;
int LongestConsecutiveArray(vector<int> &a, int n){
    if (n == 0)
        return 0;
int lastSmaller =INT_MIN;
int cnt=1,longest=1;
sort(a.begin(),a.end());
for(int i=1; i<n; i++){
    if(a[i]!=lastSmaller){
        cnt=1;
        lastSmaller=a[i];
    }

    else if(a[i]-1 == lastSmaller){
        cnt++;
        lastSmaller=a[i];
    }

    longest=max(longest,cnt);

}
return longest;
}
int main(){
vector<int>a={100,200,1,3,2,4};
int n=a.size();
int ans=LongestConsecutiveArray(a,n);
cout<<"Longest Consecutive Sequence Array"<<ans<<endl;
return 0;
}
