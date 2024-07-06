#include<iostream>
using namespace std;
//SORTING USING ARRAY

//BUBBLE SORT
void bubbleSort(int *arr,int n){
int i,j,temp;
for(i=1;i<n;i++){
    for(j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

}


//MODIFIED BUBBLE SORT MEANS CHECK IF ARRAY ALREADY SORTED THEN 1 OTHERWISE 0
bool modifiedBubbleSort(int *arr,int n){
int i;
bool isSorted;
for(i=1;i<n;i++){
        isSorted=true;
        if(arr[i-1]>arr[i]){
            isSorted=false;
            break;
        }
    }

return isSorted;
}


//SELECTION SORT
void selectionSort(int *arr, int n){
int i,j,temp;
for(i=0;i<n-1;i++){
    int minIndex=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    if(minIndex!=i)
    {
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;

    }
}

}



//INSERTION SORT USING ARRAY
void insertionSort(int *arr, int n){
int i,j,temp;
for(i=1;i<n;i++){
    temp=arr[i];
    j=i-1;
    while(j>=0 && temp<arr[j]){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
}

}


//QUICK SORT USING ARRAY
void swap(int *a, int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int partition(int *arr,int left,int right){
int pivot=arr[left];
int count=0;
for(int i=left+1; i<=right; i++){
if(pivot>arr[i])
    count++;
}
int pivotIndex=left+count;
swap(&arr[left],&arr[pivotIndex]);
int i=left,j=right;
while(i<pivotIndex && j>pivotIndex){
    while(arr[i]<pivot)
        i++;
    while(arr[j]>pivot)
        j--;

    if(i<pivotIndex && j>pivotIndex)
        swap(&arr[i],&arr[j]);
}
return pivotIndex;
}
void quickSort(int *arr, int left, int right)
{
    //base case
    if(left>right)
        return;
    //for partition
    int p=partition(arr,left,right);
    //for left index
    quickSort(arr,left,p-1);
    //for right index
    quickSort(arr,p+1,right);

}



//MERGE SORT USING ARRAY
 void merge(int *arr,int s,int mid,int e){
int len1=mid-s+1;
int len2=e-mid;
int first[len1], second[len2];
//left part
int mainIndex=s;
for(int i=0;i<len1;i++){
    first[i]=arr[mainIndex++];
}

//right part
mainIndex=mid+1;
for(int j=0;j<len2;j++){
    second[j]=arr[mainIndex++];

}
int index1=0, index2=0;
mainIndex=s;
while(index1<len1 && index2<len2)
{
    if(first[index1]<=second[index2])
        arr[mainIndex++]=first[index1++];
        else
    arr[mainIndex++]=second[index2++];

}
while(index1<len1)
    arr[mainIndex++]=first[index1++];
while(index2<len2)
    arr[mainIndex++]=second[index2++];
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
//call modified bubble sort
cout<<"is it modified bubble sort "<<endl;
cout<<modifiedBubbleSort(arr,n);
cout<<endl;

*/


/*
//call bubble sort
cout<<"print array using bubble sort"<<endl;
bubbleSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
*/



cout<<endl;

/*
//call modified bubble sort
cout<<endl;
cout<<"is it modified bubble sort "<<endl;
cout<<modifiedBubbleSort(arr,n);

*/


/*
cout<<endl;
//call selection sort
selectionSort(arr,n);
cout<<"print array using Selection sort"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
*/


cout<<endl;

/*insertionSort(arr,n);
cout<<"print array using Insertion sort"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
*/

cout<<endl;
/*
quickSort(arr,0,n-1);
cout<<"print array using quick sort"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
*/

mergeSort(arr,0,n-1);
cout<<"print array using merge sort"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
