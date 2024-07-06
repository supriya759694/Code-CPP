#include<iostream>
using namespace std;
class solution {
public:
    bool ispowerTwo(int n){
    int ans=1;
int INT_MAx=31;
    for(int i=0;i<=30;i++){
        if(ans==n){
            return true;
        }
        if(ans<INT_MAx)
            ans=ans*2;
    }
    return false;
    }
};
int main(){
solution s;
bool s1=s.ispowerTwo(4);
cout<<s1<<endl;
}
