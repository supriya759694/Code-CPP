#include<iostream>
using namespace std;
int add(int ,int , int );
int add(int ,int );
int main(){
int sum=add(4,5);
int sum1=add(7,5,2);
cout<<"sum is : " <<sum<<endl;
cout<<"sum is : "<<sum1<<endl;
}
int add(int x,int y){
int add=x+y;
return add;
}
int add(int x, int y , int z){
int add=x+y+z;
return add;

}
