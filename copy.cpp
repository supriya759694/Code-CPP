#include<iostream>
using namespace std;
class dummy {
private :
    int a,b;
public :
    dummy(dummy &d){//copy constructor
    a=d.a;
    b=d.b;
    }
    dummy(){ }
    void setdata(int x, int y ){
    a=x;b=y;
    }
    void showData(){
    cout<<"a = " << a << " b = "<<b<<endl;
    }

};
int main(){
dummy d1;
d1.setdata(4,5);
d1.showData();
dummy d2=d1;//implicit copy constructor(compiler cteated copy constructor)
        //copy contrustor called
d2.showData();
return 0;
}
