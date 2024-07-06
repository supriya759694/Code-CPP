#include<stdio.h>
#include<string.h>
int crc_checker(char data[],char div[20]){
int data1=strlen(data);
int div1=strlen(div);
//appending zeros to the data
char temp[data1+div1-1];
strcpy(temp,data);
for(int i=data1;i<data1+div1-1;i++)
    temp[i]='0';
temp[data1+div1-1]='\0';
//calculation
for(int i=0;i<data1;i++){
    if(temp[i]=='1'){
        for(int j=0;j<div1;j++)
            temp[i+j]=(temp[i+j]==div[j])?'1':'0';
    }
}
for(int i=data1;i<data1+div1-1;i++){
    if(temp[i]=='1')
        return 1;
}
return 0;
}
int main(){
char data[50],divisor[20];
printf( "enter the data : ");
scanf( "%s",data);
printf( "enter the divisor : ");
scanf( "%s",divisor);
if(crc_checker(data,divisor)==0)
    printf("no error detected %s",data);
else
    printf("error detected %s",data);
return 0;
}
