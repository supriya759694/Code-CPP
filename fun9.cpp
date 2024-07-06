#include<iostream>
using namespace std;
void swapArray(int a[],int b[],int n){
    int temp;
for(int i=0;i<n;i++){
 temp=a[i];
 a[i]=b[i];
 b[i]=temp;
}
cout<<endl;
}
int main(){
int size=5;
int arr1[]={1,5,6,7,9};
int arr2[]={20,30,50,70,5};
cout<<"before swapping "<< endl;
cout<<"array 1"<<endl;
for(int i=0;i<size;i++)
{
    cout<<arr1[i]<<" ";
}
cout<<endl;
cout<<"array 2"<<endl;

for(int i=0;i<size;i++)
{
    cout<<arr2[i]<<" ";
}
cout<<endl;
swapArray(arr1,arr2,size);
cout<<"after swapping "<<endl;
cout<<"array 1"<<endl;
for(int i=0;i<size;i++)
{
    cout<<arr1[i]<<" ";
}
cout<<endl<<"array 2"<<endl;
for(int i=0;i<size;i++)
{
    cout<<arr2[i]<<" ";
}
}
