#include<iostream>
#include<stdio.h>
using namespace std;
int BinarySearch(int arr[],int n,int key){
int s=0;
int e=0;
while(s<=e)
{
    int mid=(s+e)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]>key)
       e=mid-1;
       else
        e=mid+1;

}
return -1;
}
int main(){
int n,i;
cout<<"size of array";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
    cin>>arr[i];

for(i=0;i<n;i++)
    cout<<arr[i];
int key;
cout<<"enter the key";
cin>>key;
cout<<BinarySearch(arr,n,key);
}
