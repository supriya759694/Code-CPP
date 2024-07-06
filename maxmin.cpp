#include<iostream>
#include<climits>
using namespace std;
#include<climits>
int main()
{
    int n,i;
    cout<<"size of array"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"array";
    for(i=0;i<n;i++)
        cout<<arr[i]<<endl;
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(i=0;i<n;i++)
    {
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<"maximum number"<<maxNo<<" "<<"minimum number"<<minNo<<endl;
}
