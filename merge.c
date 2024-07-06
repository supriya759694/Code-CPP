#include<stdio.h>
void merge(int *arr,int s,int mid,int e){
mid=(s+e)/2;
int len1=mid-s+1;
int len2=e-mid;
int first[len1];
int second[len2];
//ccopy valus from the main array
//1st array
 int mainIndex=s;
for(int i=0;i<len1;i++)
    first[i]=arr[mainIndex++];
//second array
mainIndex=mid+1;
for(int i=0;i<len2;i++)
    second[i]=arr[mainIndex++];
int index1=0;
int index2=0;
int arrIndex=s;
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
mergeSort(int *arr,int s,int e){
//base case
if(s>=e)
    return;
int mid=(s+e)/2;
//for left
mergeSort(arr,s,mid);
//for right
mergeSort(arr,mid+1,e);
//merge
merge(arr,s,mid,e);

}

int main(){
int arr[]={52,5,46,85,2,1,64,10};
int n=8;
mergeSort(arr,0,n-1);
for(int i=0;i<n;i++)
    printf( "%d ",arr[i]);

    return 0;
}
