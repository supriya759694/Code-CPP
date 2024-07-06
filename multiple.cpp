#include<iostream>
using namespace std;
class vehicle{
public :
   vehicle(){cout<< "this is vehicle "<<endl;}
};
class fourwheelar{
public :
    fourwheelar(){cout<<"this is fourwheelar"<<endl;}
};
class car:public vehicle,public fourwheelar{

};
int main(){
car obj;
return 0;
}
