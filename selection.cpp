#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"size of array"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<" sorted array"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
}
