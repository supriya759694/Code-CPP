//parametarized CONSTRUCTOR WITHIN THE CLASS
#include<iostream>
#include<string.h>
using namespace std;
class Student{
private :
    int roll_no;
    char name[100];
    double fees;
public :
    Student(char a[],int roll, double f){//parametarized constructor
strcpy(name,a);
roll_no=roll;
fees=f;
    }
void display(){
cout<<"name of the student " << name << " roll no " <<  roll_no <<" fees  is " <<fees<<endl ;
}
};
int main(){
    //object created
Student s1("rahul",10,45.68),s2("Rajesh",11,35986.32);//constructor gets called automatically when we created object of this class
s1.display();
s2.display();
}

