#include<iostream>
using namespace std;
class item {
private :
    int a,b;
    static int k;
public :
    void set_a(int x){
         a=x;
          }
    void set_b(int y){
         b=y;
          }

    int get_a(){
        return a;
        }
    int get_b(){
        return b;
        }
    static void set_k(int z){
         k=z;
          }
   static int get_k(){
   return k;
   }
};
int item :: k;
int main(){
item i1,i2;
i1.set_a(6);
i1.set_b(16);
cout<<i1.get_a()<<endl;
cout<<i1.get_a()<<endl;
cout<<i2.get_a()<<endl;
cout<<i2.get_a()<<endl;
item::set_k(40);
cout<<"k= "<<item::get_k()<<endl;
return 0;
}
