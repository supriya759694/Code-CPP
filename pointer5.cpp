
#include<iostream>
using namespace std;
class Distance{
int hr,minute , sec;
public :
 void setdata(int hr, int minute , int sec){
    this->hr=hr;
    this->minute=minute;
    this->sec=sec;
    }
 void showdata();

};
Distance* create_Array(int size){
 Distance *distance= new Distance[size];
 return distance;
 }
void Distance :: showdata(){
cout<<hr << "hr"  << minute <<"minute" << sec  << "sec "<<endl;
}

int main(){
int size=5;
Distance* time=create_Array(size);
for(int i=0;i<size; i++){
    time[i].setdata(4,15,30);
    time[i].showdata();
}
delete []time;
return 0;
}
