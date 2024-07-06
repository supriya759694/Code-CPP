#include<iostream>
using namespace std;
void pointer(){
int x=10;
int *ptr=&x;
cout<<"value of ptr "<<ptr<<endl;
cout<<"value of var "<<x<<endl;
cout <<"value of *ptr"<<*ptr<<endl;

}
int main(){
    pointer();
    return 0;
}
