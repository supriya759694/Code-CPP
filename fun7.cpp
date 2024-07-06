#include<iostream>
using namespace std;
int volume(int n){
return n*n*n;
}
double volume(int r,int h){
return 0.3333*3.14*r*r*h;
}
double volume(double r){
return 1.33333*3.14*r*r*r;
}
int main(){
int v1=volume(2);
double v2=volume(2,4);
double v3=volume(2.1);
cout<<v1<<endl;
cout<<v2<<endl;
cout<<v3<<endl;
}
