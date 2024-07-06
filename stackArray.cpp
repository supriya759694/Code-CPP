
#include<iostream>
using namespace std;

class stack {
private:
    int capacity;
    int top;
    int *ptr;
public:
    stack(int );
    stack(const stack& ); // Copy constructor declaration
    stack& operator=(const stack& ); // Assignment operator declaration
    bool isEmpty();
    bool isFull();
    void push(int );
    int pop();
    void peek();
    ~stack();
};

stack::stack(int cap) {
    capacity = cap;
    top = -1;
    ptr = new int[capacity];
}

stack::stack(const stack& s) {
    capacity = s.capacity;
    top = s.top;
    ptr = new int[capacity];
    for(int i = 0; i <= top; i++) {
        ptr[i] = s.ptr[i];
    }
}

stack& stack::operator=(const stack& s) {
    if(this == &s)
        return *this;
    delete[] ptr;
    capacity = s.capacity;
    top = s.top;
    ptr = new int[capacity];
    for(int i = 0; i <= top; i++) {
        ptr[i] = s.ptr[i];
    }
    return *this;
}

bool stack::isEmpty() {
    return top == -1;
}

bool stack::isFull() {
    return top == capacity - 1;
}

void stack::push(int data) {
    if(isFull()) {
        cout << "stack overflow" << endl;
        return;
    }
    top = top + 1;
    ptr[top] = data;
}

int stack::pop() {
    if(isEmpty()) {
        cout << "stack underflow" << endl;
        return -1;
    }
    int popdata = ptr[top];
    top = top - 1;
    return popdata;
}

void stack::peek() {
    if(isEmpty()) {
        cout << "Empty stack" << endl;
        return;
    }
    for(int i = 0; i <= top; i++) {
        cout << ptr[i] << " ";
    }
}

stack::~stack() {
    delete[] ptr;
}

int main() {
    stack obj1(10);
    obj1.push(5);
    obj1.push(8);
    obj1.push(10);
    obj1.push(15);
    cout << obj1.pop() << endl;
    obj1.peek();
    cout << endl;
    return 0;
}
