#include<iostream>
using namespace std;
int gdc(int a,int b){
if (b==0){
    return a;
}
return gdc(b,a%b);
}

int lcm(int a,int b){
return a*b/gdc(a,b);
}
int lcmOfthreeNumber(int a, int b, int c){
return lcm(lcm(a,b),c);
}
int main(){
int a,b,c;
cout<<"enter three numbers : "<<endl;
cin>>a>>b>>c;
int r=lcmOfthreeNumber(a,b,c);
cout<<"lcm is "<<r;
return 0;

}
