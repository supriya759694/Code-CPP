#include<iostream>
using namespace std;
class solution {
public:
int bitwiseComplement(int n){
int m=n;
int mask=0;
if(n==0)
    return 1;
while(m!=0){
    mask=(mask<<1)|1;
    m=m>>1;
}
int ans=(~n)&mask;
return ans;
}

};
int main(){
solution s1;
int s=s1.bitwiseComplement(5);
cout<<s<<endl;
}
