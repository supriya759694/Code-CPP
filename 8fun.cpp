#include<iostream>
using namespace std;
float area(int );
int area(int , int );
double area(double , double );
int main(){
float a1=area(5);
int a2=area(4,8);
double a3=area(5.0,2.0);
cout<<"area of circle is : "<<a1<<endl;
cout<<"area of rectangle is : "<<a2<<endl;
cout<<"area of triangle  is : "<<a3<<endl;
}
float area(int r){
return 3.14*r*r;
}
int area(int l, int b){
return l*b;
}
double area(double b, double h){
return (1.0/2.0)*b*h;
}
