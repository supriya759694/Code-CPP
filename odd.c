#include<stdio.h>
#include<string.h>
void odd_parity(char a[]){
int count=0;
for(int i=0;i<strlen(a);++i){
    if(a[i]=='1')
        count++;
}
int parity_bit=(count%2==0)?1:0;
printf( "data and paritybit : %s%d\n",a,parity_bit);
}
int odd_parity_checker(char b[]){
int count=0;
for(int i=0;i<strlen(b);i++){
    if(b[i]=='1')
        count++;
}
return count %2 ==1;
}
int main(){
char data[]="11011";
odd_parity(data);
char odd_parity[]="11010";
printf("odd parity checked passed : %s ",(odd_parity_checker(odd_parity))? "yes" :"no");
return 0;
}
