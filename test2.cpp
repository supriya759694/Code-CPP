#include<iostream>
using namespace  std;
//pass by value
int square1(int n){
cout<<"address of n1 in squre1(): "<<&n<<"\n";
n*=n;
return n;
}
//pass by reference with pointer arguments
void square2(int *n){
cout<<"address of square2() : "<<n<<"\n";
*n *=*n;
}
//pass by reference with reference arguments
void square3(int &n){
cout<<"address of n3 in square3() : "<<&n;
n*=n;

}
void geeks(){

//call by value
int n1 = 8;
cout<<"address of n1 in main() : "<< &n1 <<"\n";
cout<<"square of n1 : "<<square1(n1)<<"\n";
cout<<"no change in n1 : "<<n1 <<"\n ";
//call by Reference with pointer arguments
int n2=8;
cout<<"address of n2 in main() :"<<&n2<<"\n";
square2(&n2);
cout<<"square of n2 : " <<n2 << "\n";
cout<<"change reflected in n2 : " << n2 <<"\n ";

//call by reference with reference arguments
int n3 =8;
cout<<"address of n3  in main() : "<<&n3<<"\n ";
square3(n3);
cout<<"square of n3 : "<<n3 <<"\n ";
cout<<"change reflected in n3 : " <<n3 <<"\n ";

}
int main(){
geeks();
}
