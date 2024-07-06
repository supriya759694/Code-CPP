#include<iostream>
using namespace std;
int maximum_no(int ,int );
double maximum_no(double , double );
int main(){
int m1=maximum_no(6,8);
double m2=maximum_no(9.9,6.5);
cout<<"maximum number is : "<<m1<<endl;
cout<<"maximum number is : "<<m2<<endl;
}
int maximum_no(int a,int b){
    int max_no;
if(a>b){
   max_no=a;
}
else
{
    max_no=b;
}
return max_no;
}
double maximum_no(double a,double b){
    double max_no;
if(a>b){
   max_no=a;
}
else
{
    max_no=b;
}
return max_no;
}
