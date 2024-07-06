
#include<iostream>
using namespace std;
inline inline_function(int x, int y){return x*y;}
inline inline_function2(int x, int y){return max(x,y);}

int main(){
int x=3,y=7;
cout<< "multiplication of two numbers using inline function: "<<inline_function(3,7)<<endl;
cout<< "maximum number between two numbers using inline function: "<<inline_function2(3,7)<<endl;

return 0;
}
