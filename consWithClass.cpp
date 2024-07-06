//DEFING CONSTRUCTOR WITHIN THE CLASS
#include<iostream>
using namespace std;
class Student{
private :
    int roll_no;
    char name[100];
    double fees;
public :
    Student(){//no arguments default constructor
    cout<<"enter the Roll no : ";
    cin>>roll_no;
    cout<<"enter the name of student : ";
    cin>>name;
    cout<<"enter the fees  : ";
    cin>>fees;
    }
void display(){
cout<<"name of the student " << name << " roll no " <<  roll_no <<" fees  is " <<fees<<endl ;
}
};
int main(){
    //object created
Student s1,s2;//constructor gets called automatically when we created object of this class
s1.display();
s2.display();
}
