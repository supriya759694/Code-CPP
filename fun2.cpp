#include<iostream>
using namespace std;
#include<string.h>
void sortString(string[],int , bool  );

int main()
{
string str[]={"apple","cherry","anal","dinesh","chana","dev"};
int size=sizeof(str)/sizeof(str[0]);
sortString(str,size,true);
cout<<"ascending order"<<endl;
for(int i=0;i<size;i++){
    cout<<str[i]<<" ";
}
sortString(str,size,false);
cout<<endl<<"decending order"<<endl;
for(int i=0;i<size;i++){
    cout<<str[i]<<" ";
}
cout<<endl;
return 0;
}
void sortString(string s[],int n, bool ascending ){
int r,i;
string t;
if(ascending){
        for(r=1;r<n-1;r++){
            for(i=0;i<=n-1-r;i++){
                    if(s[i]>s[i+1]){
                    t=s[i];
                    s[i]=s[i+1];
                    s[i+1]=t;
            }
        }

    }
}
else{
  for(r=1;r<n-1;r++){
            for(i=0;i<=n-1-r;i++){
                    if(s[i]>s[i+1]){
                            t=s[i];
                    s[i]=s[i+1];
                    s[i+1]=t;
            }
        }

    }

}
}
