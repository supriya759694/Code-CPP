//copy CONSTRUCTOR WITHIN THE CLASS
#include<iostream>
#include<string.h>
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
    Student(Student &s){//copy constructor
    roll_no=s.roll_no;
     strcpy(name,s.name);
    fees=s.fees;
    }
void display(){
cout<<"name of the student " << name << " roll no " <<  roll_no <<" fees  is " <<fees<<endl ;
}
};
int main(){
    //object created
Student s1,s2;//constructor gets called automatically when we created object of this class
Student s3(s1);//called copy constructor
s1.display();
s2.display();
s3.display();
}

