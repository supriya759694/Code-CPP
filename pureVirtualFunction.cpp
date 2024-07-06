//pure virtual function or Abstract class
#include<iostream>
class AbstractShape{
public :
    AbstractShape() { std::cout<<"parent class constructor"<<std::endl;};
    virtual void draw() const=0;//pure virtual function
    ~AbstractShape(){ std::cout<<"parent class destructor "<<std::endl;};
};
class Circle : public AbstractShape{
public :
    Circle(){ std::cout<<"Circle constructor"<<std::endl;};
    void draw()const override{
    std :: cout<< "Drawing a  circle : "<<std ::endl;
    }
    ~Circle(){std::cout<<"called circle destructor"<<std::endl;};
};
class Square : public AbstractShape{
public :
    Square() { std::cout<<"square constructor "<<std::endl;};
    void draw()const override{
    std :: cout<< "Drawing a  square : "<<std ::endl;
    }
    ~Square() {std::cout<< "square destructor "<<std::endl;};

};
int main(){
Circle circle;
Square square;
circle.draw();
square.draw();
return 0;
}
