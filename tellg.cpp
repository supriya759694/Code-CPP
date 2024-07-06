#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream fin;
char ch;
fin.open("myfile.txt");
int pos;
pos=fin.tellg();
cout<<pos;
fin>>ch;
pos=fin.tellg();
cout<<pos;
fin>>ch;
pos=fin.tellg();
cout<<pos;
fin>>ch;
pos=fin.tellg();
cout<<pos;
fin>>ch;
pos=fin.tellg();
cout<<pos;
}
