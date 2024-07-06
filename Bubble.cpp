
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"size of array"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"array"<<" ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    int counter=1;
    while(counter<n){
        for(i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    cout<<"Bubble sort"<<" ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
