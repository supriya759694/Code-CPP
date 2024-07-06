#include<iostream>
using namespace std;
#include<math.h>
int power(int x, int y);
int main(){
    int x,y;
    cout<<"enter the value of x and y "<<endl;
    cin>>x>>y;

    int p=power(x,y);
cout<<x<<"raised to the power is "<<y << "is "<< p;
}
int power(int x, int y){
int z= pow(x,y);
return z;
}
