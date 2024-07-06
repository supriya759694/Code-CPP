
#include<iostream>
using namespace std;
int main(){
int n=5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
            cout<< " ";
        int l=1;
        for(int k=1;k<=i;k++)
        {
            cout<<l;
            l=l*(i-k)/k;
        }
    }
    cout<<endl;
}
}
