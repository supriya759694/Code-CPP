#include<stdio.h>
 void swap(int *a,int *b){
     int t=*a;
     *a=*b;
     *b=t;
}
int partition(int *arr,int s,int e){
int pivot=arr[s];
int count=0;
for( int i=s+1;i<=e;i++){
 if(arr[i]<pivot)
        count++;
}
int pIndex=s+count;
swap(&arr[s],&arr[pIndex]);
int i=s;
int j=e;
while(i<pIndex && j>pIndex){
    while(arr[i]<pivot)
        i++;
    while(arr[j]>pivot)
        j--;
    if(arr[i]>pivot && arr[j]<pivot)
        swap(arr[i],arr[j]);
}
return pIndex;
}
void quickSort(int *arr,int s, int e){
if(s>=e)
    return;
int p=partition(arr,s,e);
//for left partition
quickSort(arr,s,p-1);
//for right partition
quickSort(arr,p+1,e);
}
int main(){
int arr[]={20,30,50,2,8,51,33,7};
int n=8;
quickSort(arr,0,n-1);
for(i=0;i<n;i++){
    printf("%d ",arr[i])'
}
return 0;
}
