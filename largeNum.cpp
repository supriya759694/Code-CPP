#include<bits/stdc++.h>
using namespace std;

//large number
int largeNumber(int arr[], int n){
    int large=arr[0];
for(int i=1;i<=n-1;i++){
    if(arr[i]>large)
        large=arr[i];
}
return large;
}

int SeondLargeNumber(int arr[], int n){
    int large=INT_MIN;
    int smax = INT_MIN;

for(int i=1;i<=n-1;i++){
    if(arr[i]>large){
        smax=large;
        large=arr[i];
}
else if(arr[i]<large && arr[i]>smax)
    smax=arr[i];
}
return smax;
}


//check array sorted
bool isSorted(int arr[], int n){
for(int i=1;i<n; i++){
    if(arr[i]<arr[i-1]){
        return false;
    }
}
return true;
}

//remove duplicate
void removeDuplicate(int arr[], int n){
/*int temp[n];
int j=0;
temp[j]=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]!=arr[j])
        temp[++j]=arr[i];*/
 set<int>st;
 for(int i=0;i<n;i++){
    st.insert(arr[i]);
 }
for(auto a : st)
    cout<<a<<" ";
}

void sorted(int arr[],int n){
for(int j=1;j<n;j++){
for(int i=0;i<n-j; i++){
    if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
}
}

int main(){
int arr[]={10,20,5,7,12,28,50,15,23,30,1};
int n=10;
int large = largeNumber(arr,n);
cout<<"large number in the array : "<<large<<endl;

int slarge=SeondLargeNumber(arr,n);
cout<<"large number in the array : "<<slarge<<endl;
int arr1[]={10,20,30,40,50};
cout<<"is array sorted"<<isSorted(arr1,5);
cout<<endl;
int arr2[]={2,6,2,6,10,12,10,11,10,12};
sorted(arr2,10);
for(int i=0;i<10;i++)
 cout<<arr2[i]<<" ";
cout<<endl;
removeDuplicate(arr2,10);

cout<<endl;
}
