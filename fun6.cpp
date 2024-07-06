#include<iostream>
using namespace std;
void swaping(int& ,int&);
int main(){
int x,y;
cout<<"enter the value of x and y : " << endl;
cin>>x>>y;
cout<<"before swapping : "<<x <<" "<<y<<" "<<endl;
swaping(x,y);
cout<<"after swapping : " <<x << " "<<y<< " "<<endl;
}
void swaping(int& x, int& y){
x=x+y;
y=x-y;
x=x-y;
}
