#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream fout;//object of output stream
fout.open("myfile.txt", ios::app);
int pos;
pos=fout.tellp();
cout<<pos;
fout<<"mysirg";
pos=fout.tellp();
cout<<pos;
fout.close();
}
