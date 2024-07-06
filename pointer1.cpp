#include<iostream>
using namespace std;
class person {
int age;
string name ;
public :
    person(int age, string name)//formal argumtents
    {
        this->age=age;
        this->name=name;
    }
    void print_data(){
    cout<<"name is :" <<name << "  age is " <<age<<endl;
    }
} ;
int main(){
person p1(25," Ajoy Pramanik");
p1.print_data();
return 0;
}
