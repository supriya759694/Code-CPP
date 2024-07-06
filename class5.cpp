#include<iostream>
using namespace std;
class circle{
private :
    int radius;
public :
    void set_radius(int r){
    radius=r;
    }
    int get_radius(){
    return radius;
    }
    double area(){
    return 3.14*radius*radius;
    }
    double circumferrance(){
    return 2*3.14*radius;
    }

};
int main(){
circle c1,c2;
c1.set_radius(10);
cout<<c1.get_radius()<<endl;
cout<<c1.area()<<endl;
cout<<c1.circumferrance()<<endl;
return 0;
}
