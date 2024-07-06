#include<iostream>
using namespace std ;
class complex {
private :
    int real ;
    int img ;
public :
    complex(int x, int y ){
    real =x;
    img = y ;
    }
    complex(){}

    void print(){cout <<  real  <<" + "<< "i"<<img;}
    complex operator+(complex &c){
    complex temp;
    temp.real=real + c.real;
    temp.img=img +c.img ;
    return temp;
    }
complex operator-(complex &c){
    complex temp;
    temp.real=real - c.real;
    temp.img=img -c.img ;
    return temp;
    }

};
int main(){
complex c1(10,12),c2(5,6),c3(9,5),c4;
  c4=c1+c2;//c4=c1.operator+(c2);
complex c5=c1-c2;
complex c6=c1+c3;
complex c7=c1+c4;
c4.print();
cout<<endl;
c5.print();
cout<<endl;
c6.print();
cout<<endl;
c7.print();
cout<<endl;
}

