#include<bits/stdc++.h>
using namespace std;
//LARGEST ELEMENT

int largestElement(int arr[], int n){
    int largest=-1;
for(int i=0; i<n; i++){
    if(arr[i]>largest)
        largest=arr[i];

}
return largest;
}


//FIND SECOND LARGEST ELEMENT OF THE ARRAY

int SecondLargestElement(int arr[], int n){
    int largest=-1;
    int slargest=-1;
for(int i=0; i<n; i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
            slargest=arr[i];
}
return slargest;
}


//CHECK IF THE ARRAY SORTED
bool ifSorted(int arr[], int n){
for(int i=1; i<n; i++){
    if(arr[i]<arr[i-1])
        return false;
}
return true;
}

//REMOVE DUPLICATE FROM THE ARRAY
void removeDuplicate(int arr[],int n){
set<int>s1;
for(int i=0; i<n; i++){
    s1.insert(arr[i]);
}

for(auto x : s1)
    cout<<x<<" ";
}


//left rotate array by 1 places
void leftRotateArray(int arr[], int n){
    int temp=arr[0];
for(int i=1; i<n; i++){
    arr[i-1]=arr[i];

}
arr[n-1]=temp;
}

//LEFT ROTATE BY d places
void leftRotateBy_d_places(int arr[], int n){
int d=3;
d=d%n;
int temp[d];
for(int i=0;i<d;i++){
    temp[i]=arr[i];
}
for(int j=d; j<n; j++){
    arr[j-d]=arr[j];
}
int index=0;
for(int k=n-d; k<n; k++){
    arr[k]=temp[index++];

}

for(int r=0; r<n; r++){
    cout<<arr[r]<<" ";
}
}


//MOVE 0 TO THE END OF THE ARRAY
void  move0toEnd(int arr[], int n){
int j=0;
int temp[n];
for(int i=0; i<n; i++){
  if(arr[i]!=0){
    temp[j++]=arr[i];
}
}
while(j<n)
    temp[j++]=0;

for(int k=0; k<n; k++)
    arr[k]=temp[k];

for(int t=0;t<n; t++)
    cout<<arr[t]<<" ";
}

//LINEAR SEARCH
int linearSearch(int arr[], int n, int num){
for(int i=0;i<n;i++){
    if(arr[i]==num)
        return i;
}
return -1;
}


//UNION OF TWO SORTED ARRAY
void union_Array(int a1[], int a2[], int m, int n){
int i=0,j=0;
while(i<m && j<n){
    if(a1[i] < a2[j])
        cout<<a1[i++]<<" ";
    else if(a1[i]>a2[j])
        cout<<a2[j++]<<" ";
    else{
        cout<<a1[i++]<<" ";
        j++;
    }

}

while(i<m)
    cout<<a1[i++]<<" ";
while(j<n)
    cout<<a2[j++]<<" ";
}


//INTERSECTION OF TWO SORTED ARRAY
void intersection_Sortedarray(int u1[],int u2[],int m,int n){
int i=0,j=0;
while(i<m && j<n){
    if(u1[i] < u2[j])
        i++;
    else if(u1[i] > u2[j])
        j++;
    else{
        cout<<u1[i++]<<" ";
        j++;
    }

}

}

int main(){
int a1[]={4,6,10,12,8,7,50,30,2};
int n= 9;
int largest=largestElement(a1,n);
cout<<"largest element of the array is "<<largest<<endl;


int slargest=SecondLargestElement(a1,n);
cout<<"second largest element of the array"<<slargest<<endl;


//check if the array sorted or not
cout<<"if the array sorted"<<ifSorted(a1,n)<<endl;
int a2[]={4,5,9,10,12};
cout<<"if the array sorted"<<ifSorted(a2,5)<<endl;
cout<<endl;

//remove duplicate from the array
cout<<"remove duplicate from the array by using set STL"<<endl;
int arr[]={4,8,10,12,10,8,4,5,6,2,10};
removeDuplicate(arr,11);
cout<<endl;

//left rotate array by 1 places
cout<<"left rotate by 1 places"<<endl;
leftRotateArray(a1,n);
for(int i=0;i<n;i++)
    cout<<a1[i]<<" ";
cout<<endl;

//left rotate array by d places
cout<<"left rotate by d places"<<endl;
int arr1[]={4,6,20,10,12,15,80,11,50,16};
leftRotateBy_d_places(arr1,10);
cout<<endl;

//move 0 to the end of the array
cout<<"move 0 to the end of the array"<<endl;
int arr2[]={4,6,0,7,0,8,10,0,11,0,0,0,12};
move0toEnd(arr2,13);
cout<<endl;


//LINEAR SEARCH
cout<<"linear search"<<endl;
int num=5;
int index=linearSearch(arr,n,num);
cout<<"number find at index "<<index<<endl;


//UNION OF TWO SORTED ARRAY
cout<<"union of two sorted array"<<endl;
int u1[]={3,6,8,10,12,23,25,30,42,50};
int u2[]={1,2,5,10,12,20,23,50};
union_Array(u1,u2,10,8);
cout<<endl;

//INTERSECTION OF TWO SORTED ARRAY
cout<<"intersection of two sorted array"<<endl;
intersection_Sortedarray(u1,u2,10,8);
cout<<endl;


int p[]={1,1,2};
int s=3;
removeDuplicate(p,3);
}
