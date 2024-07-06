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

    void print(){cout <<" real number "<<  real  <<" "<< "imaginary number "<<img;}
    complex add(complex &c){
    complex temp;
    temp.real=real + c.real;
    temp.img=img +c.img ;
    return temp;
    }

};
int main(){
complex c1(10,12),c2(5,6),c3(9,5),c4;
c4=c1.add(c2);
c4.print();
cout<<endl;
}
