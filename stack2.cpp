#include<iostream>
#include<stdio.h>
using namespace std;
#define n 100
class stack{
private :
    int* arr;
    int top;
public :
    stack(){
    arr=new int[n];
    top=-1;
    }
    void push(int data)
    {
        if(top==(n-1))
            cout<<"Array is full"<<endl;
        else
        {
            top++;
            arr[top]=data;
        }

    }
    void pop()
    {
       if(n==-1)
            cout<<"Array is Empty"<<endl;
       else
        top--;

    }
   int Top(){
    if(top==-1)
        return -1;
    else
        return arr[top];
    }
   bool isEmpty()
    {
        if(top==-1)
        return -1;
    }
};
int main()
{
stack st;
st.pop();
st.pop();
st.push(5);
st.push(4);
st.push(3);
st.push(2);
st.push(1);
cout<<st.Top()<<endl;
st.pop();
st.pop();
st.pop();
st.pop();
cout<<st.Top()<<endl;

}
