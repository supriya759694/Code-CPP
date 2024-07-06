#include<iostream>
using namespace std;
class Array{
private :
    int capacity;
    int lastIndex;
    int *ptr;
protected :
    void doubleArray();
    void halfArray();
public :
    Array();//default constructor
    Array(Array& );//copy constructor
    Array& operator=(Array& );//assignment operator
    void createArray(int );//Array Create with given capacity
    bool isFull();
    bool isEmpty();
    void append(int );//append data in the array
    void insert(int ,int );//insert data given index
    void del(int );//delete data given index
    int get_capacity();
    int count();//count total array elements
    void edit(int ,int );//edit index by newdata
    int get_item(int );//value of array by index
    ~Array();//destructor
};

Array :: Array(){//default constructor
ptr=NULL;
}
Array::Array(Array& arr){//copy constructor
 capacity=arr.capacity;
 lastIndex=arr.lastIndex;
ptr=new int[capacity];
for(int i=0;i<=lastIndex;i++){
    ptr[i]=arr.ptr[i];
}
}
Array& Array:: operator=(Array& arr){
capacity=arr.capacity;
lastIndex=arr.lastIndex;
if(!ptr)
    delete []ptr;
ptr=new int[capacity];
for(int i=0;i<=lastIndex;i++){
    ptr[i]=arr.ptr[i];
}
}
void Array :: createArray(int cap){
capacity=cap;
lastIndex=-1;
if(ptr!=NULL)
    delete []ptr;
ptr=new int[capacity];
}
bool Array ::isFull(){
return lastIndex==capacity-1;
}

bool Array::isEmpty(){
return lastIndex==-1;
}
void Array:: append(int data){
if(!isFull()){
    lastIndex++;
    ptr[lastIndex]=data;
}
else
    doubleArray();

}
void Array::insert(int index, int data){
try{
if(index<0 || index>lastIndex+1)
    throw 1;
if(isFull())
    doubleArray();
for(int i=lastIndex;i>=index;i--){
    ptr[i+1]=ptr[i];

}
ptr[index]=data;
lastIndex++;
}
catch(int e){
if(e==1)
    cout<<"Empty Index or Invalid Index"<<endl;
}
}
void Array :: del(int index){
try{
if(index<0 || index>lastIndex+1)
    throw 1;
for(int i=index;i<=lastIndex;i++){
    ptr[i]=ptr[i+1];
}
lastIndex--;
if(capacity<1 && lastIndex+1<=capacity/2)
    halfArray();
}
catch(int e){
cout<< "invalid index or Empty index"<<endl;
}
}

int Array::get_capacity(){
return capacity;
}
int Array:: count(){
return lastIndex+1;
}
void Array::edit(int index,int newData){
try{
if(index<0 || index>lastIndex+1)
    throw 1;
    ptr[index]=newData;

}
catch(int e){
cout<< "empty Index or Invalid index"<<endl;
}
}
int Array::get_item(int index){
    try{

    if(index<0 || index>lastIndex+1)
        throw 1;
    return ptr[index];
    }
    catch(int e){
    cout<< "invalid index"<<endl;
    }
    return -1;
}
void Array:: doubleArray(){
int *temp;
temp=new int[capacity*2];
for(int i=0;i<=lastIndex;i++){
    temp[i]=ptr[i];
}
delete []ptr;
ptr=temp;
capacity*=2;
}
Array::~Array(){
delete []ptr;
}
void Array:: halfArray(){
int *temp;
temp=new int[capacity/2];
for(int i=0;i<=lastIndex;i++)
    temp[i]=ptr[i];
delete []ptr;

}
int main(){
    Array arr;
    arr.createArray(3);
    arr.append(5);
    arr.append(10);
    arr.append(15);
    arr.append(71);
    arr.append(20);
    arr.append(21);
    arr.append(31);
    cout<< "print arry before operation"<<endl;
    for(int i=0;i<arr.count();i++)
        cout<<arr.get_item(i)<< " ";

    cout<<"\ninsert index 3 data 30"<<endl;
    arr.insert(3,30);
    cout<< "print arry after insert operation"<<endl;
    for(int i=0;i<arr.count();i++)
        cout<<arr.get_item(i)<< " ";

    cout<<"\ndelete index 4 data "<<endl;
    arr.del(4);
    cout<< "print arry after delete operation"<<endl;
    for(int i=0;i<arr.count();i++)
        cout<<arr.get_item(i)<< " ";



}


