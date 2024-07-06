#include<iostream>
#include<stdio.h>
using namespace std;
#define n 30
class queue{
int* arr;
int front;
int back;
public :
    queue()
    {
      arr=new int[n];
      front=-1;
      back=-1;
    }
    void push(int data)
    {
        if(back==n-1)
            cout<<"\n Queue is Overflow";
        else
            back++;
        arr[back]=data;

            if(front==-1)

            front++;
    }
    void pop()
    {
        if(front==-1 || front>back)
            cout<<"\n queue is Underflow";
        else
            front++;
    }
    int peek()
    {
    if(front==-1 || front>back)
    cout<<"\n queue is Underflow";
    else
        return arr[front];

    }
    bool isEmpty()
    {
    if(front==-1 || front>back)
    return -1;
    else
        return false;
    }
};
int main()
{
    queue s;
    s.push(1);
    s.push(9);
    s.push(3);
    s.push(4);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
return 0;
}
