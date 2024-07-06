#include<iostream>
using namespace std;
void prime(int );
void prime(int n){
for(int i=2;i<n;i++){

    if(n%i==0){
        cout<<n <<"is not prime no. "<<endl;
        break;
    }
        else
        {
            cout<<n <<"is prime no  "<<endl;
            break;
        }
    }
}

int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
prime(n);
}
