#include<iostream>
using namespace std;

int prime(int n){
for(int i=2;i<n;i++){
   if(n%i==0)
        return 0;
else
   return 1;
}


}
int main(){
int a;
cout<< "enter number"<<endl;
cin>>a;
cout<<prime(a);
return 0;
}
