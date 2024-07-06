
#include<iostream>
using namespace std;
class Distance{
int hr,min , sec;
public :
 void setdata(int hr, int min , int sec){
    this->hr=hr;
    this->min=min;
    this->sec=sec;
    }
 void showdata();
};
void Distance :: showdata(){
cout<<hr << "hr"  << min <<"min" << sec  << "sec "<<endl;
}

int main(){
Distance c1;
c1.setdata(7,28,52);
c1.showdata();
return 0;
}
