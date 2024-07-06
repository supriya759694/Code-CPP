#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream fout;
fout.open("myfile.txt");
fout<< "helllo welcome to India";
fout.close();
}
