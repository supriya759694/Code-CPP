//define memeber function outside the class


#include<iostream>
using namespace std;
class person{
int id;
char name[100];
public:
   void set_p();
   void display_p();
};
 void person :: set_p(){
    cout<<"enter the person id "<<endl;
    cin>>id;
    fflush(stdin);
    cout<<"enter the person name"<<endl;
    cin.get(name,100);
    }
    void person :: display_p(){
    cout<<endl<<id<<"\t"<<name<<"\t";
    }
class student : private person{
char course[50];
int fees;
public:
    void set_s();
    void display_s();
};

void student :: set_s(){
    set_p();
    cout<<"enter the course name "<<endl;
     fflush(stdin);
    cin.get(course,50);
    cout<<"enter the fees "<<endl;
    cin>>fees;
    }
    void student :: display_s(){
     display_p();
     cout<<course<<"\t"<<fees<<"\t"<<endl;
    }
int main(){
student stu;
stu.set_s();
stu.display_s();
return 0;
}

