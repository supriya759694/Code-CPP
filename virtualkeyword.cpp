//calculate area of shape without virtual keyword
#include<iostream>>
using namespace std;
class shape{
public:
    shape(int l , int w){
    length=l;
    width=w;
    cout<< "parent class "<<endl;
    }
   virtual int area(){
    cout<< "call parent class "<<endl;
    return 1;
    }
protected :
    int length, width;
virtual ~shape(){cout<< "shape destructor call "<<endl;}
};
class square : public shape{
public :
    square(int l=0 , int w=0) : shape(l,w){
     cout<< "square class"<<endl;
    }
    int area(){
    cout<< "arae of square is : "<<length*width<<endl;
    return length*width;
    }
    virtual ~square(){cout<< "square destructor call"<<endl;}
};
class Rectangle : public shape{
public :
    Rectangle(int l=0 , int w=0) : shape(l,w){
     cout<<"rectangle class "<<endl;
    }
    int area(){
    cout<<"area of Rectangle : "<<length*width<<endl;
    return length*width;
    }
    virtual ~Rectangle(){cout<< "Rectangle destructor call "<<endl;}
};

int main(){
shape* s=new shape(4,1);;//pointer shape type also point shape object
square sq(5,5);//object square type
Rectangle rec(4,6);//object of rectangle type
s->area();
s=&sq;
s->area();
s=&rec;
s->area();
return 0;
}

