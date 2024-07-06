#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int n,i;
cout<<"size of array"<<endl;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
cout<<" "<<arr[i]<<" ";
}
