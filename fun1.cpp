#include<iostream>
using namespace std;
void sortArray(int ,int ,bool );

void sortArray(int a[],int n,bool ascending ){
    int r,i,t;
if(ascending){
   for(r=1; r<=n-1;r++){
    for(i=0;i<=n-1-r;i++){
        if(a[i]>a[i+1]){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;

    }
    }
   }
}
else {
   for(r=1; r<=n-1;r++){
    for(i=0;i<=n-1-r;i++){
        if(a[i]<a[i+1]){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;

    }
    }
   }
}
}

//void sortArray(int ,int ,bool );
int main(){
int arr[]={2,5,4,8,6,9,3,10,1};
int size=sizeof(arr)/sizeof(arr[0]);
sortArray(arr,size,true);
cout<<"ascending order"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
sortArray(arr,size,false);
cout<<endl<<"decending order"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;

}
