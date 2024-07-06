#include<iostream>
using namespace std;
void printSubString(string& str, int startIndex, int endIndex=-1){
if(endIndex=-1){
    endIndex=str.length();
}
for(int i=startIndex;i<endIndex;i++){
    cout<<str[i]<<" ";

}
cout<<endl;
}
int main(){
string str="hello, India";
printSubString(str,0);
printSubString(str,0,5);
printSubString(str,1,3);
printSubString(str,7);

}
