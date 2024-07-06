#include<iostream>
#include<stdexcept>
using namespace std;
class customException : public exception{
const char* what() const noexcept override{
return  "custom exception occurred ";
}
};
int main(){
/*try{
int a,b;
cout<< "enter two number : "<<endl;
cin>>a>>b;
if(b==0)
    throw  "division by zero";
int result=a/b;
cout<<"result is : "<<result<<endl;
}catch(char const *s){
cout<< "exception caught  : "<<s<<endl;

}*/
try{
int a,b;
cin>>a>>b;
if(b<=0)
    throw customException();
    cout<<"result"<<a/b;
}
catch(exception &e){
cout<<e.what()<<endl;
}

return 0;
}
