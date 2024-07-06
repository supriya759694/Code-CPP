//exception not caught anywhere , program end abnormally
#include<iostream>
using namespace std;
int main(){
try{
throw 'a';
}
catch(int e) {
cout<< "caught :"<<e<<endl;
}
cout<< "end program";
return 0;
}

