#include<stdio.h>
#include<iostream>
using namespace std;
#define n 100
class stack{
private :
int* arr;
int top;
public :
   stack()
    {
        arr=new int[n];
        top=-1;
    }
   void push( int data){
    if(top==n-1)
        cout<<"Array is full"<<endl;
    else
    {
        top++;
        arr[top]=data;
    }
    }
  void pop(){
        if(top==-1)
        cout<<"no elements in array to pop"<<endl;
    else
        top--;
    }
   int Top()
    {
       if(top==-1)
        return -1;
       else
        return arr[top];
    }
  bool  isEmpty()
    {
        if(top==-1)
            return top==-1;
    }



};
int main()
{
    stack st;
st.pop();
cout<<st.Top()<<endl;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
cout<<"top value"<<st.Top()<<endl;
st.pop();
st.pop();
cout<<"top value"<<st.Top()<<endl;



}
