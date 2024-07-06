#include<iostream>
using namespace std;
class vehicle{
public :
    vehicle(){cout<<"this is vehicle"<<endl;}
};
class car : public vehicle{

};
class bus : public vehicle{

};
int main(){
car car1;
bus bus1;
return 0;
}
