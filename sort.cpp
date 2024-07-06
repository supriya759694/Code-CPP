//bubble sort

#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int *arr,int n){
for(int i=1;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}

void selection_sort(int *arr, int n){
int arr2[n],i,j,k;
int min_value=arr[0];
for(i=1;i<n;i++){
    for(int j=1;j<n;j++){
        if(arr[j]<min_value){
            min_value=arr[j];

        }
    }
    arr2[i-1]=min_value;
}

for(k=0;k<n;k++){
    cout<<arr2[k]<<" ";
}
};
int main(){
int arr[100]={40,21,38,68,70,25,90,18,7,54};
int n=10;
cout<<"\nprint before bubble sorting"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

//bubble sorting
/*bubble_sort(arr,n);
cout<<"\nprint after bubble sorting"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

*/
cout<<"selection sort"<<endl;
selection_sort(arr,n);

}

