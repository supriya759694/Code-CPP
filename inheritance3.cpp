//define member function outside the class with arguments
#include<iostream>
#include<string.h>
using namespace std;
class person{
int id;
char name[100];
public:
   void set_p(int , char[]);
   void display_p();
};
 void person :: set_p(int id, char n[]){
    this->id=id;
    strcpy(this->name,n);
    }
    void person :: display_p(){
    cout<<endl<<id<<"\t"<<name<<"\t";
    }
class student : private person{
char course[50];
int fees;
public:
    void set_s(int,char[],char[],int);
    void display_s();
};

void student :: set_s(int id,char n[],char c[], int f){
    set_p(id,n);
    strcpy(course,c);
    fees=f;
    }
    void student :: display_s(){
     display_p();
     cout<<course<<"\t"<<fees<<"\t"<<endl;
    }
int main(){
student stu;
stu.set_s(11,"Supriya Bhowmick", "b.tech", 408000);
stu.display_s();
return 0;
}


