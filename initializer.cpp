#include<iostream>
using namespace std;
class point {
int x,y;//class variable
public :
    point(int i=4,int j=5): x(i),y(j){}
    /*concept of constructor
    point(int i=4, int j=5){
    x=i;
    y=j;
    }
    */
    int get_x()const{return x;};
    int get_y()const{return y;};
};
int main(){
point t1(10,15);
cout<<"x = " << t1.get_x();
cout<< "y = " << t1.get_y();
return 0;
}
