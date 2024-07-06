#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream fout;
fout.open( "myfile.txt",ios::ate|ios::app);
cout<<fout.tellp();
cout<<endl;
fout.seekp(2,ios_base::beg);
cout<<fout.tellp();
cout<<endl;
fout.seekp(-3,ios_base::end);
cout<<fout.tellp();
fout.close();
return 0;
}
