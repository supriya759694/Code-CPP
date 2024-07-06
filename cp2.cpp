#include<iostream>
using namespace std;
class room{
int length,breadth;
public :
   room(int x=0,int y=0){
   length=x;
   breadth=y;
   }
   int getlength(){
   return length;
    }
    int getbreadth(){
   return breadth;
    }
};
class bedroom:public room{
private :
    int height;
public :
    bedroom(int x=0,int y=0, int z=0):room(x,y){
    height=z;
    }
int volume(){
cout<<"volume is : "<<getlength()*getbreadth()*height<<endl;
}
};
int main(){
bedroom b1(3,2,5);
b1.volume();
}
