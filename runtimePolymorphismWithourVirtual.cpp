//calculate area of shape without virtual keyword
#include<iostream>>
using namespace std;
class shape{
public:
    shape(int l , int w){
    length=l;
    width=w;
    }
    int area(){
    cout<< "call parent class "<<endl;
    return 1;
    }
protected :
    int length, width;
};
class square : public shape{
public :
    square(int l=0 , int w=0) : shape(l,w){

    }
    int area(){
    cout<< "arae of square is : "<<length*width;
    return length*width;
    }
};
class Rectangle : public shape{
public :
    Rectangle(int l=0 , int w=0) : shape(l,w){

    }
    int area(){
    cout<<"area of Rectangle : "<<length*width;
    return length*width;
    }
};

int main(){
shape *s;//pointer shape type
square sq(5,5);//object square type
Rectangle rec(4,6);//object of rectangle type
s=&sq;
s->area();
s=&rec;
s->area();
return 0;
}
