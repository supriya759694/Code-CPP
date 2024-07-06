//find maximum and minimum value from the given array value given from the user
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int n,i;
cout<<"size of array \n";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"array ";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    int maxNo=arr[i];
    for(i=0;i<n;i++)
    {
        if(maxNo<arr[i])
            maxNo=arr[i];
    }
    cout<<"maximum no "<<maxNo<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    int minNo=arr[i];
    for(i=0;i<n;i++)
    {
        if(minNo>arr[i])
            minNo=arr[i];
    }
    cout<<"minimum no "<<minNo<<endl;
    return 0;
}
