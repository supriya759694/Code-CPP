#include<iostream>
using namespace std;
class complex{
private :
    int real,imag;
public :
    complex(int x=0, int y=0){
    real=x;
    imag=y;
    }
    complex(complex const &c1){
    real=c1.real;
    imag=c1.imag;

    }
    complex operator+(complex  &obj)const{
    complex result;
    result.real=real+obj.real;
    result.imag=imag+obj.imag;
    return result;
    }
    void print(){
    cout<< "result of complex number is : "<<real<< " + i "<<imag<<endl;
    }

};
int main(){
complex c1(10,20),c2(12,13);
complex c4(c2);
complex c3 = c1+c2;
c3.print();
return 0;
}
