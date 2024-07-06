#include<iostream>
using namespace std;
class fibonacci{
int num;
public:
    fibonacci(int n){num=n;}
    void  fib(){
    int a=-1,b=1,c,i=1;
    while(i<=num){
    c=a+b;
    cout<<c;
    a=b;
    b=c;
    i++;
    }
    }

};
int main(){
int n;
cout<<"enter the fibonacci terms "<<endl;
cin>>n;
fibonacci obj(n);
obj.fib();

}
