#include<iostream>
using namespace std;
#include<string.h>
class mystring{
private :
    char *s;
    int length;
public :
    mystring(){
    s=nullptr;
    length=0;
    }
~mystring(){
if(s!=nullptr)
    delete []s;
}

void inputstring(){
cout<<"enter the string : : ";
char buffer[100];
cin.getline(buffer, sizeof(buffer));
length=strlen(buffer);
s=new char[length+1];
strcpy(s,buffer);
}
void printString(){
cout<< "string is : " << s<<endl;
}
};

int main(){
mystring strobj;
strobj.inputstring();
strobj.printString();
}
