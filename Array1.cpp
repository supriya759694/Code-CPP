#include<iostream>
using namespace std;
class Array{
private :
    int capacity;
    int lastIndex;
    int *ptr;
public:
    Array();//constructor
    Array(Array& );//copy contructor
    Array& operator=(Array& );//copy assignment operator
    void createArray(int );
    bool isEmpty();
    bool isFull();
    void append(int );
    void insert(int ,int );
    int getitem(int );
    int getCapacity();
    int count();
    int edit(int , int );
    void del(int );
    ~Array();
};
 Array :: Array(){
 ptr=NULL;
 }
 Array::Array(Array &arr){
 capacity=arr.capacity;
 lastIndex=arr.lastIndex;
 ptr=new int[capacity];
 for(int i=0;i<=lastIndex;i++){
    ptr[i]=arr.ptr[i];
 }

 }
 Array& Array:: operator=(Array &arr){
 capacity=arr.capacity;
 lastIndex=arr.lastIndex;
 if(ptr!=NULL)
    delete []ptr;
 ptr=new int[capacity];
 for(int i=0;i<=lastIndex;i++){
    ptr[i]=arr.ptr[i];
 }
 return *this;
 }
void Array :: createArray(int cap){
capacity=cap;
lastIndex=-1;
if(!ptr)
    delete []ptr;
ptr=new int[capacity];
}
void Array::append(int data){

try{
    if(isFull())
        throw 1;

    ptr[++lastIndex]=data;

}
catch(int e){
if(e==1)
{
cout<<"array is Full or overflow"<<endl;
}

}
}
bool Array::isEmpty(){
return lastIndex==-1;
}
bool Array:: isFull(){
return capacity==lastIndex+1;
}
void Array::insert(int index,int data){
try{
if(index<0 || index>lastIndex+1)
    throw 1;
if(isFull())
    throw 2;
for(int i=lastIndex;i>=index;i--){
     ptr[i+1]=ptr[i];
}
ptr[index]=data;

}
catch(int e){
if(e==1){
cout<< "invalid index"<<endl;
}
if(e==2){
cout<<"overflow"<<endl;
}
}
}
int Array:: getitem(int index){
try{
if(index<0 || index>lastIndex)
    throw 1;
return ptr[index];
}
catch(int e){
cout<<"invalid index"<<endl;
}
}
int Array :: getCapacity(){
return capacity;
}
int Array::count(){
return lastIndex+1;
}
int Array::edit(int index, int data){
try{
if(index<0 || index>lastIndex)
    throw 1;
    ptr[index]=data;

}
catch(int e){
cout<< "Invalid index"<<endl;
}
}
 void Array:: del(int index){
 try{
 if(index<0 || index>lastIndex)
    throw 1;
 for(int i=index;i<=lastIndex;i++){
    ptr[i]=ptr[i+1];
 }
 lastIndex --;
 }
 catch(int e)
 {
     cout<< "Invalid index"<<endl;

 }
 }
 Array :: ~Array(){
 delete []ptr;
 }


int main(){
//create an array object
Array obj;
obj.createArray(7);
//append some elements
obj.append(10);
obj.append(20);
obj.append(40);
obj.append(30);
obj.append(11);
obj.append(15);
cout<< " array elemets before operations "<<endl;
for(int i=0;i<obj.count();i++){
    cout<<obj.getitem(i)<< " ";
}
cout<<endl;
//insert an element at specific index
obj.insert(2,35);
//get and display an element at a specific index
int value=obj.getitem(2);
cout<< "display element at index no 2 is "<<value;
//display capacity and count of an array elements
cout<< "display capacity : "<<obj.getCapacity()<<endl;
cout<< "count of array elements : "<<obj.count()<<endl;
//edit an element at specific index
obj.edit(3,55);
//delete an element
obj.del(4);
//display entire array
cout<< " array elemets after operations "<<endl;
for(int i=0;i<obj.count();i++){
    cout<<obj.getitem(i)<< " ";
}
cout<<endl;
}

