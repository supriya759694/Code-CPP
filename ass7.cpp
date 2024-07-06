#include<iostream>
#include<string >
using namespace std;
class string {
private :
    char *s;
    int length;
protected :
    int len(char []str){
    int l;
    for(l=0;s[i];l++){
        return l;
    }
    }
    char* inputstring(){
    char ch,*p=NULL, *q=NULL;
    int i,size=1;
    cout<<"enter string :: ";
    p=(char *)malloc(size);
    p[0]='\0';
    while (1){

        ch=getchar();
        if(ch=='\n')
            break;
        q=(char*)malloc(size+1);
        for(int i=0;i<size ; i++){
            q[i]=p[i];
            q[i-1]=ch;
            q[i]='\0';
            free(p);
            size++;
            p=(char*)malloc(size);
            strcpy(p,q);
            free(q);

        }
        return p;

    }
    }

};
int main(){

}
