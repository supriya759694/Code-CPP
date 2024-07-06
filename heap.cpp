//from love babbar
#include<iostream>
using namespace std;
class heap{
public :
    int arr[100];
    int n;
    heap(){//contructor
    n=0;
    }
    void Maxheapify(int i){//max heapify
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        if(left<=n && arr[largest]<arr[left]){
            largest=left;
        }
        if(right<=n && arr[largest]<arr[right]){
            largest=right;
        }
         if(largest!=i){
            swap(arr[i],arr[largest]);
            Maxheapify(largest);
        }


    }

    //min heapify function
    void Minheapify(int i){//max heapify
        int smallest=i;
        int left=2*i;
        int right=2*i+1;
        if(left<=n && arr[smallest]>arr[left]){
            smallest=left;
        }
        if(right<=n && arr[smallest]>arr[right]){
            smallest=right;
        }
         if(smallest!=i){
            swap(arr[i],arr[smallest]);
            Minheapify(smallest);
        }


    }
    //HEAP SORT
    void heapSort(){
    int size1=n;
    while(size1>1){
        //step 1: swap
        swap(arr[size1],arr[1]);
        //step 2:
        size1--;
        //Minheapify(1);
        Maxheapify(1);

    }
    }

    void deleteRoot(){//delete root
    //base case
    if(n==0){
        cout<<"nothing to delete "<<endl;
        return;
    }
    //step : 1 put last element into the first index
    arr[1]=arr[n];
    //step 2 :remove last element
    n--;
    //step 3:take root node current position
    //Minheapify(1);
    Minheapify(1);

    }
    void insertNode(int val){//insertion
      n=n+1;
      int index=n;
      arr[index]=val;
      while(index>1){
        int parent=index/2;
        //cout<<parent<<endl;
       if(arr[index]>arr[parent]){
        swap(arr[parent],arr[index]);
        index=parent;
       // cout<<" index"<<index<<endl;
       }
      }

    }

    void buildMaxHeap() {

    for (int i = n / 2 ; i >= 1; i--) {
        Maxheapify(i);
    }
}

void buildMinHeap() {


    for (int i = n / 2 ; i >= 1; i--) {
        Minheapify(i);
    }
}
    void printArray(){
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    }

};
int main(){
heap h1;
//call insertion member function
h1.insertNode(10);
h1.insertNode(12);
h1.insertNode(15);
h1.insertNode(120);
//h1.insertNode(50);
h1.printArray();
cout<<endl;
 heap h2;//second object
    int arr1[] = {55, 50, 56, 9, 6, 66, 90};
    int n1=7;
    h2.n=n1;
    for(int j=0;j<=h2.n;j++){
        h2.arr[j+1]=arr1[j];
        //cout<<h2.arr[j]<<" ";
    }
    h2.printArray();
    cout<< "\nafter printing Max_heapify function"<<endl;
    h2.buildMaxHeap();
    h2.printArray();

    cout<< "\nafter printing Min_heapify function"<<endl;
    h2.buildMinHeap();
    h2.printArray();

    cout<<"\ndelete root"<<endl;
    h2.deleteRoot();
    h2.printArray();

     cout<<"\nperform heap sort"<<endl;
    h2.heapSort();
    h2.printArray();
    return 0;
}





