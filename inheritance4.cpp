#include<iostream>
using namespace std;
class parent{
public :
    int id_p;
};
class child : public parent{
public :
   int id_c;

};
int main(){
child obj1;
obj1.id_c=7;
obj1.id_p=9;
cout<<"parent class is "<<obj1.id_p<<endl;
cout<<"child class is "<<obj1.id_c<<endl;
return 0;
}
