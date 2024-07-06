#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream fin;
fin.open( "myfile.txt");
cout<<fin.tellg();
cout<<"\n"<<(char)fin.get();
cout<<(char)fin.get();
cout<<(char)fin.get();
cout<<(char)fin.get();
cout<<endl;
cout<<fin.tellg();
fin.seekg(6);
cout<<"\n"<<fin.tellg();
cout<<"\n"<<(char)fin.get();
cout<< "\n"<<fin.tellg();
cout<<"\n"<<(char)fin.get();
cout<< "\n"<<fin.tellg();
fin.seekg(-2,ios_base::end);
cout<<"\n"<<fin.tellg();
cout<<"\n"<<(char)fin.get();
fin.seekg(3,ios_base::beg);
cout<<"\n"<<fin.tellg();
cout<<"\n"<<(char)fin.get();
return 0;
}

