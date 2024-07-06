#include<iostream>
using namespace std;
class Item {

private :
    int a,b;//instance member variable
    static int k;//static member variable
public :
    void set_a(int x){ //instance method
    a=x;
    }
    void set_b(int y){  //instance method
    b=y;
    }

    int get_a(){ //instance method
    return a;
    }
    int get_b(){ //instance method
    return b;
    }
    static void set_k(int z){  //static method
    k=z;
    }
    static int get_k(){  //static method
    return k;
    }
};
int Item :: k;//defining static variable
int main()
{
 Item i1,i2;
 i1.set_a(8);
 cout<<i1.get_a()<<endl;
 cout<<i1.get_b()<<endl;
 cout<<i2.get_a()<<endl;
cout<<i1.get_b()<<endl;
 Item :: set_k(10);
cout<<Item::get_k()<<endl;
cout<<endl;
return 0;
}
