#include<iostream>
using namespace std;
class A{
    int count;
public:
    A(int x=0){
    count=x;
    }
    void operator --(){
        for(int i=0;i<=5;i++){
    cout<< --count<<endl;
        }
    }
    void operator ++(){
        for(int i=0;i<=5;i++){
    cout<< ++count<<endl;
        }
    }
    /*void print(){
    cout<<count<<endl;
    }*/
};
int main(){
A a1('a');
 --a1;

 ++a1;
//a1.print();
}
