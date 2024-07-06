//------------------------LINER SEARCH------------------------------------------------------
#include<iostream>
#include<stdio.h>
using namespace std;
int LinearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
            return i;
    }
            return -1;

}
int main()
{
    int n,i;
    cout<<"size of array";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    int key;
    cout<<"enter key value"<<endl;
    cin>>key;
    cout<<LinearSearch(arr,n,key);

}
