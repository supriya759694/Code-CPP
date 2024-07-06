#include<bits/stdc++.h>
using namespace std;
//PRINT UNION OF TWO SORTED ARRAY
void union_SortedArray(int arr1[], int arr2[], int m,int n){
int i=0,j=0;
while(i<m && j<n){
    if(arr1[i]<arr2[j]){
        cout<<arr1[i++]<<" ";
    }
    else if(arr1[i]>arr2[j]){
       cout<<arr2[j++]<<" ";
    }
    else{
        cout<<arr2[j++]<<" ";
        i++;

    }
}



//remaing elements
while(i<m)
    cout<<arr1[i++]<<" ";
while(j<n)
    cout<<arr2[j++]<<" ";
}


//INTERSECTION OF TWO SORTED ARRAY
void intersection_Sortedarray(int arr1[],int arr2[], int m,int n){
int i=0,j=0;
while(i<m && j<n){
    if(arr1[i]<arr2[j])
        i++;
    else if(arr2[j]<arr1[i])
        j++;
    else{
        cout<<arr1[i++]<<" ";
        j++;
    }
}

}




//left rotate Array
void leftRotateArray(int arr[], int n){
int temp=arr[0];
for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
}
arr[n-1]=temp;
}


//LEFT ROTATE BY D PLACES
void leftRotateBy_d_places(int arr[], int n){
int d=4;//rotate array by d places
d=d%n;
int temp[d];
for(int i=0;i<d;i++){
     temp[i]=arr[i];//stored array in temp
}
for(int j=d;j<n;j++){
    arr[j-d]=arr[j];//shifting
}
int index=0;
for(int k=n-d;k<n;k++)
{
    arr[k]=temp[index++];
}

}

//right rotate array
void rightRotateArray(int arr[], int n){
int temp=arr[n-1];

for(int i=n-2;i>=0;i--){
    arr[i+1]=arr[i];
}
arr[0]=temp;
}


//MOVE 0 TO THE END
//MOVE 0 TO THE END
void move0toEnd(int arr[],int n){
int temp[n];
int count_0=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        temp[count_0++]=arr[i];

    }
    }
    while(count_0<n){
        temp[count_0++]=0;

    }
    for(int j=0;j<n;j++)
        arr[j]=temp[j];

}
//LINEAR SEARCH
int linearSearch(int arr[], int n, int num){
for(int i=0;i<n; i++){
    if(arr[i]==num)
        return i;
}
return -1;
}
int  main(){
int arr[]={4,6,10,2,12,8,7,20,54,8};
int n=10;
//leftRotateArray(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

//rightRotateArray(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
leftRotateBy_d_places(arr,n);
//cout<<"left rotate by d places"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int arr2[]={4,6,0,7,0,8,0,10,0,5};
move0toEnd(arr2,10);
for(int i=0;i<n;i++){
    cout<<arr2[i]<<" ";
}
cout<<endl;


//linear search
int num=54;
int index=linearSearch(arr,n,num);
cout<<"number find in index: "<<index<<endl;
cout<<endl;


//union two sorted array
int a1[]={2,5,10,12,14,20,30,45,50};
int a2[]={1,5,7,10,40,45};
int x=9, y=6;
cout<<"UNION Of two sorted array"<<endl;
union_SortedArray(a1,a2, x,y);

cout<<endl;
cout<<"intersection of two sorted array"<<endl;
intersection_Sortedarray(a1,a2, x,y);
cout<<endl;
}

