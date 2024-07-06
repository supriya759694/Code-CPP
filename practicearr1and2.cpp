#include<iostream>
using namespace std;

int largestElement(int arr[],int n){//LARGEST ELEMENT OF THE ARRAY
int largest=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }

}
return largest;
}

int smallestElement(int arr[],int n){//SMALLEST ELEMENT OF THE ARRAY
int smallest=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
    }

}
return smallest;
}

int SecondLargestElement(int arr[],int n){//SECOND LARGEST ELEMENT OF THE ARRAY
int largest=arr[0];
int slargest=-1;
for(int i=1;i<n;i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }

else{
    if(arr[i]<largest && arr[i]>slargest)
        slargest=arr[i];
}
}
return slargest;
}

int SecondSmallestElement(int arr[],int n){//SECOND SMALLEST ELEMENT OF THE ARRAY
int smallest=arr[0];
int ssmallest=INT_MAX;
for(int i=1;i<n;i++){
    if(arr[i]<smallest){
        ssmallest=smallest;
        smallest=arr[i];
    }

else{
    if(arr[i]>smallest && arr[i]<ssmallest)
        ssmallest=arr[i];
}
}
return ssmallest;
}

bool isSortedArray(int arr[],int n){
for(int i=0;i<n-1;i++){
    if(arr[i]<=arr[i+1]){

    }
    else{
        return false;
    }
}
return true;
}


int  removeDuplicate(int arr[],int n){//REMOVE DUPLICATE VALUE OFVTHE SORTED ARRAY
int i=0;
for(int j=1;j<n;j++){
    if(arr[i]!=arr[j]){
        arr[++i]=arr[j];
    }
}
return i+1;
}

void leftSortedArray(int arr[],int n){
int temp=arr[0];
for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
}
arr[n-1]=temp;
}
void leftSortedByDplaces(int arr[],int n,int d){
d=d%n;
int temp[d];
for(int i=0;i<d;i++){//shifting property stored in temp array
    temp[i]=arr[i];
}
for(int j=d;j<n;j++){//shift property
    arr[j-d]=arr[j];
}
for(int k=n-d;k<n;k++){
    arr[k]=temp[k-(n-d)];
}
}
void rightRotateArray(int arr[], int n){
int temp=arr[n-1];
for(int i=n-1;i>0;i--){
    arr[i]=arr[i-1];
}
arr[0]=temp;
}

void moveZeroEndArray(int arr[], int n){
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0)
        arr[count++]=arr[i];
}
while(count<n)
    arr[count++]=0;
}


int linearSearch(int arr[],int n,int num){//linear search
for(int i=0;i<n;i++){
if(arr[i]==num)
    return i;
}
return -1;
}

void unionArray(int a1[],int size1,int a2[],int size2){//UNION OF TWO SORTED ARRAY
int i=0,j=0;
while(i<size1 && j<size2){
if(a1[i]<a2[j]){
    cout<<a1[i++]<<" ";
}
else if(a1[i]>a2[j])
    cout<<a2[j++]<<" ";
else{
    cout<<a1[i++]<<" ";
    j++;
}
}
while(i<size1){
    cout<<a1[i++]<<" ";
}
while(j<size2){
    cout<<a2[j++]<<" ";
}
}


void intersection(int a1[],int size1,int a2[],int size2){//UNION OF TWO SORTED ARRAY
int i=0,j=0;
while(i<size1 && j<size2){
if(a1[i]<a2[j]){
    i++;
}
else if(a1[i]>a2[j])
    j++;
else{
    cout<<a1[i++]<<" ";
    j++;
}
}

}
int main(){
int arr[100]={4,15,3,1,30,100,2,12,10,50};
int n=10;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<"\n largest element of the array = "<<largestElement(arr,n)<<endl;
cout<<"\n smallest element of the array = "<<smallestElement(arr,n)<<endl;
cout<<"\n Second largest element of the array = "<<SecondLargestElement(arr,n)<<endl;
cout<<"\n Second largest element of the array = "<<SecondSmallestElement(arr,n)<<endl;

int arr2[50]={4,5,6,8,9,12};
int n1=6;
cout<< "is array sorted "<<isSortedArray(arr,n)<<endl;
cout<< "is array sorted "<<isSortedArray(arr2,n1)<<endl;

int arr3[20]={4,4,14,14,20,20,28};
int n2=7;
int value=removeDuplicate(arr3,n2);
cout<<"\nremove duplicate value of the sorted array"<<endl;
for(int k=0;k<value;k++){
    cout<<arr3[k]<<" ";
}
cout<<"\nleft sorted array"<<endl;
leftSortedArray(arr,n);
for(int x=0;x<n;x++){
    cout<<arr[x]<<" ";
}
int d=3;
cout<<"\nleft sorted array by d = "<<d<<" places"<<endl;
leftSortedByDplaces(arr,n,d);
for(int x=0;x<n;x++){
    cout<<arr[x]<<" ";
}
cout<<"\n right rotated array"<<endl;
rightRotateArray(arr,n);
for(int x=0;x<n;x++){
    cout<<arr[x]<<" ";
}
int arr4[30]={4,0,5,6,0,0,7,0,8,0,12,13};
int n4=12;
cout<<"\nMove all zeros to the end of the array "<<endl;
moveZeroEndArray(arr4,n4);
//moveZeroEndArray(arr3,n3);
for(int l=0;l<n4;l++){
    cout<<arr4[l]<<" ";
}
int index=linearSearch(arr4,n,6);
cout<<" \nindex of the nymber is"<<index<<endl;

cout<<"union of two sorted array"<<endl;
int a1[]={4,6,10,12,19,20,22};
int size1=7;
int a2[]={2,4,6,10,20,21,28,30,35,40,45,50};
int size2=12;
unionArray(a1,size1,a2,size2);

cout<<"\nintersection of two sorted array"<<endl;
intersection(a1,size1,a2,size2);
return 0;
}
