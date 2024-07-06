#include<iostream>
using namespace std;
void mergeArray(int a[], int b[],int m[],int size){
    int i=0,j=0,k=0;
while(i<size && j<size){
    if(a[i]<b[j]){
        m[k]=a[i];
        i++;

    }
    else{
        m[k]=b[j];
        j++;

    }
   k++;
}
//rest of elements shifted in arry
while(i>size){
    m[k++]=a[i++];
}
while(j>size){
    m[k++]=a[j++];
}
}
int main(){
int size=5;
int a1[]={4,5,8,12,14,22,26,88};
int a2[]={6,12,18,20,25};
int m[2*size];
mergeArray(a1,a2,m,size);
cout<<"merge array"<<endl;
for(int i=0;i<2*size;i++){
    cout<<m[i];
}
cout<<endl;
}
