#include<iostream>
using namespace std;
 void arryPointer(){
int var[5] = {5,8,4,2,10};
int *ptr;
ptr=var;
for(int i=0;i<100;i++){
cout<<*ptr<<endl;
cout<<ptr<<endl;
ptr++;
}

}
int main(){
arryPointer();

}
