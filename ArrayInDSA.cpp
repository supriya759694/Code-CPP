#include<iostream>
#include<stdio.h>
using namespace std;
class Array{
private :
    int capacity;
    int lastIndex;
    int *ptr;
public:
    Array();
    Array(Array& );
    Array& operator=(Array& );
    void createArray(int );
    void append(int );
    bool isFull();
    bool isEmpty();
    void insert(int , int );
    int getItem(int );
    int get_capacity();
    int count();
    void edit(int , int );
    void del(int );
    ~Array();

};
//constructor
Array:: Array(){
ptr=NULL;
}
//copy  constructor or It creates a new Array object
// that is a copy of the arr object passed to it.
Array :: Array(Array& arr){
capacity=arr.capacity;
lastIndex=arr.lastIndex;
ptr=new int[capacity];
for(int i=0;i<=lastIndex;i++){
    ptr[i]=arr.ptr[i];
}
}
//overload copy assignment operator
 Array& Array :: operator=(Array &arr){
capacity=arr.capacity;
lastIndex=arr.lastIndex;
if(ptr!=NULL)
    delete []ptr;
ptr=new int[capacity];
for(int i=0;i<=lastIndex;i++)
    ptr[i]=arr.ptr[i];

}

//create array given capacity
    void Array :: createArray(int cap){
    capacity=cap;
    lastIndex=-1;
    if(ptr!=NULL)
        delete []ptr;
    ptr=new int[capacity];

    }
//method to append element end of the array
void Array :: append(int data){
    if(!isFull()){
        lastIndex++;
        ptr[lastIndex]=data;
    }
    else
        cout<<"\n Overflow : Append is not performed"<<endl;
}
bool Array::isFull(){
return lastIndex==capacity-1;
}
bool Array ::isEmpty(){
return lastIndex==-1;
}
 void Array :: insert(int index, int data){
 int i;
 try{
 if(index<0 || index>lastIndex+1)
    throw 1;
 if(isFull())
    throw 2;
 for(i=lastIndex;i>=index;i--){
    ptr[i+1]=ptr[i];
 }
 ptr[index]=data;
 lastIndex++;
 }
 catch(int e){
  if(e==1)
    cout<<"Invalid index"<<endl;
  if(e==2)
    cout<< "overflow";
 }
 }
 //Method to get Item by index number
 int Array:: getItem(int index){
     try{
        if(index<0 || index>lastIndex)
            throw 1;
        return ptr[index];
 }
 catch(int e){
 cout<<"Invalid array or empty Array";
 }
 return -1;
 }
//method to get capacity of array
int Array::get_capacity(){
return capacity;
}
//method to get count of the elements of the array
int Array::count(){
return lastIndex+1;
}
//method edit an element at a specific index
void Array::edit(int index, int newData){
    try{
    if(index<0 || index>lastIndex)
        throw 1;
     ptr[index]=newData;
    }
    catch(int e){
    cout<<"invalid index";
    }

}
//to delete an element at specific index
void Array ::del(int index){
try{
if(index<0 || index>lastIndex)
    throw 1;
for(int i=index;i<=lastIndex;i++)
    ptr[i]=ptr[i+1];
lastIndex--;
   }
   catch(int e){
   if(e==1)
    cout<< "invalid index or empty array"<<endl;
   }
}
//destructor to free the dynamically allocated memory
 Array::~Array(){
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
    cout<<obj.getItem(i)<< " ";
}
cout<<endl;
//insert an element at specific index
obj.insert(2,35);
//get and display an element at a specific index
int value=obj.getItem(2);
cout<< "display element at index no 2 is "<<value;
//display capacity and count of an array elements
cout<< "display capacity : "<<obj.get_capacity()<<endl;
cout<< "count of array elements : "<<obj.count()<<endl;
//edit an element at specific index
obj.edit(3,55);
//delete an element
obj.del(4);
//display entire array
cout<< " array elemets after operations "<<endl;
for(int i=0;i<obj.count();i++){
    cout<<obj.getItem(i)<< " ";
}
cout<<endl;
}

