#include<iostream>
using namespace std;
class solution{
public:
    int reverse(int x){
    long long int ans=0;
    while(x){
        int lastDigit=x%10;
        ans=ans*10+lastDigit;
        /*if(ans>INT_MAx || ans<INT_MIN)
            return 0;*/
        x/=10;
    }

    ans=x>0? ans : -ans;
    return ans;

    }
};


int main(){
    solution a1;
int a=a1.reverse(-1556);
cout<<a<<endl;
}
