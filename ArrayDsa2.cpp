#include<iostream>
using namespace std;
class Array{
private :
    int capacity;
    int lastIndex;
    int *ptr;

public :
    Array();
    Array(Array& );
    Array& operator=(Array& );
    void CreateArray(int );
    void append(int );
    bool isFull();
    bool isEmpty();
    void insert(int , int );
    void edit(int , int );
    void del(int );
    int get_capacity();
    int count();
    int get_item(int );
};
//default Constructor
Array :: Array(){
 ptr=NULL;
}
//copy constructor
Array :: Array(Array &arr){
capacity=arr.capacity;
lastIndex=arr.lastIndex;
ptr=new int[capacity];
for(int i=0;i<=lastIndex;i++)
    ptr[i]=arr.ptr[i];
}
//copy assignment operator
Array& Array :: operator=(Array& arr){
  capacity=arr.capacity;
  lastIndex=arr.lastIndex;
  if(ptr!=NULL)
    delete []ptr;
  ptr=new int[capacity];
  for(int i=0;i<=lastIndex;i++)
    ptr[i]=arr.ptr[i];
  return *this;
  }
void Array :: CreateArray(int cap){
capacity = cap;
lastIndex=-1;
if(ptr!=NULL)
delete []ptr;
ptr= new int[capacity];
}
void Array :: append(int data){
if(!isFull()){
  lastIndex++;
  ptr[lastIndex]=data;
}
else
    cout<< "Array is Full : Append is not performed"<<endl;
}
bool Array :: isFull(){
return lastIndex==capacity-1;
}
 bool Array :: isEmpty(){
 return lastIndex==-1;
 }
  void Array::insert(int index, int data){
  try{
  if(isFull())
    throw 1;
  if(index<0 || index>lastIndex+1)
    throw 2;
  for(int i=lastIndex; i>=index; i--)
    ptr[i+1]=ptr[i];
  ptr[index]=data;
  lastIndex++;
  }
  catch(int e){
  if(e==1)
    cout<<"Overflow"<<endl;
  if(e==2)
    cout<<"Invalid Index"<<endl;
  }
  }
  void Array::edit(int index, int newData ){
  try{
  if(index<0 || index>lastIndex)
    throw 1;
  ptr[index]=newData;
  }
  catch(int e){
  cout<<"invalid Index";
  }
  }
   void Array :: del(int index){
   try{
   if(index<0 || index>lastIndex)
    throw 1;
   for(int i=index; i<=lastIndex;i++)
    ptr[i]=ptr[i+1];
   lastIndex --;

   }
   catch(int e){
   cout<<"Invalid Index"<<endl;
   }
   }
 int Array :: get_capacity(){
     return capacity;
 }
 int Array ::count(){
 return lastIndex+1;
 }
 int Array:: get_item(int index){
 return ptr[index];
 }
int main(){
Array arr1,arr2;
//create Array with 10 blocks
arr1.CreateArray(10);
//performed append function
arr1.append(50);
arr1.append(30);
arr1.append(40);
arr1.append(80);
arr1.append(20);
for(int i=0;i<arr1.count();i++)
    cout<<arr1.get_item(i)<<" ";
    cout<<endl;
cout<< "total elements of the array"<<arr1.count();
cout<<endl;
arr1.insert(1,55);
cout<< "55 in index 1"<<endl<<endl;
for(int i=0;i<arr1.count();i++)
    cout<<arr1.get_item(i)<<" ";
    cout<<endl;
cout<< "total elements of the array"<<arr1.count()<<endl;
cout<< "element in 3index is : "<<arr1.get_item(3)<<endl;
cout<<"capacity is : "<<arr1.get_capacity()<<endl;
cout<< "performed delete operation"<<endl;
cout<< "delete  value "<<arr1.get_item(4);
arr1.del(4);
cout<<endl;
for(int i=0;i<arr1.count();i++)
    cout<<arr1.get_item(i)<<" ";
    cout<<endl;
cout<< "is array full??"<<arr1.isFull();
cout<<endl;
cout<< "is array empty??"<<arr1.isEmpty();

return 0;
}
