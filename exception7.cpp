#include<iostream>
using namespace std;
class text{
public:
text(){cout<<"constructor text called"<<endl;}
~text(){cout<< "destructor text called"<<endl;}
};
int main(){
try{
text t;
throw 20;
}
catch(int e){
cout<< "caught"<<e<<endl;
}
}


