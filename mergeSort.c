#include<stdio.h>
void merge(int *arr,int s,int mid,int e){
mid=(s+e)/2;
int len1=mid-s+1;//4
int len2=e-mid;//4
/*int *first=new int[len1];
int *second=new int[len2];*/
int first[len1];
int second[len2];
//copy values
int main_array_index=s;
for(int i=0;i<len1;i++){
    first[i]=arr[main_array_index++];

}
 main_array_index=mid+1;
for(int i=0;i<len2;i++){
    second[i]=arr[main_array_index++];

}
int index1=0;
int index2=0;
int mainIndex=s;
while(index1<len1 && index2<len2){
    if(first[index1]<second[index2])
        arr[mainIndex++]=first[index1++];
        else
        arr[mainIndex++]=second[index2++];
}
while(index1<len1){
    arr[mainIndex++]=first[index1++];
}
while(index2<len2){
    arr[mainIndex++]=second[index2++];

}
}

void mergeSort(int *arr,int s,int e){
if(s>=e)
    return ;
    int mid=(s+e)/2;

//for left array
mergeSort(arr,s,mid);
//for right array
mergeSort(arr,mid+1,e);
//merge two arrays
merge(arr,s,mid,e);
}

int main(){
int arr[50]={20,25,5,98,50,20,60,80,5,};
int  n=9;
mergeSort(arr,0,n-1);
for(int i=0;i<n;i++)
    printf( "%d ",arr[i]);
return 0;

}
