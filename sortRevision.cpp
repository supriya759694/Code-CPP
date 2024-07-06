#include<bits/stdc++.h>
using namespace std;
//BUbble sort
void bubbleSort(int *arr, int n){
int i,j,temp;
for(i=1;i<n;i++){
    for(j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}
bool modifiedBubbleSort(int *arr, int n){
bool isSort=true;
for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
        isSort=false;
        break;
    }
}
return isSort;
}


//selection sort
void selectionSort(int *arr, int n){
int i,j,temp;
for(int i=0;i<n-1;i++){
        int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[minIndex]>arr[j])
            minIndex=j;
    }
    if(minIndex!=i){
        temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;

    }
}
}


//insertion sort

void insertionSort(int *arr, int n){
int i,j,temp;
for(i=1; i<n; i++){
    temp=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
         arr[j+1]=temp;
    }

}



//quick sort

void swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int partition(int *arr,int s,int e){
int pivot=arr[s];
int count=0;
for(int i=s+1;i<=e;i++){
    if(pivot>arr[i])
        count++;
}

int pIndex=s+count;
swap(&arr[pIndex],&arr[s]);
int i=s,j=e;
while(i<pIndex && j>pIndex){
while(arr[i]<pivot)
    i++;
while(arr[j]>pivot)
    j--;
    if(i<pIndex && j>pIndex)
        swap(&arr[i],&arr[j]);
}
return pIndex;
}
void quickSort(int *arr, int s,int e){
//base case
if(s>=e)
    return;
int p=partition(arr,s,e);
quickSort(arr,s,p-1);
quickSort(arr,p+1,e);

}
//merge sort
void merge(int *arr,int s,int mid,int e){
int len1=mid-s+1;
int len2=e-mid;
int first[len1];
int second[len2];
//left part copy
int mainIndex=s;
for(int i=0;i<len1;i++){
    first[i]=arr[mainIndex++];
}

mainIndex=mid+1;
for(int j=0;j<len2;j++){
    second[j]=arr[mainIndex++];
}

//merge
int arrIndex=s;
int index1=0;
int index2=0;
while(index1<len1 && index2<len2){
    if(first[index1]<second[index2])
        arr[arrIndex++]=first[index1++];
    else
        arr[arrIndex++]=second[index2++];

}
while(index1<len1)
  arr[arrIndex++]=first[index1++];
while(index2<len2)
  arr[arrIndex++]=second[index2++];
}


void mergeSort(int *arr, int s, int e){
//base case
if(s>=e)
 return;
int mid=(s+e)/2;
mergeSort(arr,s,mid);
mergeSort(arr,mid+1,e);
merge(arr,s,mid,e);
}
int main(){
int arr[]={40,21,38,68,70,25,90,18,7,54};
int n=10;
/*
cout<<"modified bubble sort"<<endl;
cout<<modifiedBubbleSort(arr,n);
cout<<endl;

cout<<"bubble sort"<<endl;
bubbleSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

cout<<endl;
cout<<"modified bubble sort"<<endl;
cout<<modifiedBubbleSort(arr,n);
cout<<endl;
*/

/*selectionSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}*/

/*insertionSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
*/
/*quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}*/
mergeSort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
