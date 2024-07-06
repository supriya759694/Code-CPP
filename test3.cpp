#include<iostream>
using namespace std ;
int square1(int n){
cout<<"address of n in square1 :"<<&n<<endl;
n=n*n;
return n ;
}

 int square2(int *n){
 cout<<"address of n in square2 : "<<&n<<endl;
 *n *=*n;
 }
 int square3(int &n){
 cout<<"address of n in square2 : "<<&n<<endl;
 n=n*n;
 }
void pointer(){
//call by value
int n1=8;
cout<<"address of n1 in main() :"<<&n1<<endl;
cout  <<square1(n1)<<endl;
cout<<"no chanege in n1 "<<n1<<endl;


//call by reference with pointer arguments
int n2=8;
cout<<"address of n2 in main() :"<<&n2<<endl;
cout  <<square2(&n2)<<endl;
cout<<"chanege in n2 "<<n2;
int n3=8;
cout<<"address of n2 in main() :"<<&n3<<endl;
cout  <<square3(n3)<<endl;
cout<<"chanege in n2 "<<n3;

}
int main(){
pointer();
}
