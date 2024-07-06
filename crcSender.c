#include<stdio.h>
#include<string.h>
void crc_sender(char data[],char divisor[]){
int data1=strlen(data);
int div1=strlen(divisor);
//append zeros to the data for division
char temp[data1+div1-1];
strcpy(temp,data);
for(int i=data1;i<data1+div1-1;i++)
    temp[i]='0';//assigned value in temp
    temp[data1+div1-1]='\0';
    //crc calculation
for(int i=0;i<data1;i++){
    if(temp[i]=='1'){
        for(int j=0;j<div1;j++){
            temp[i+j]=(temp[i+j]==divisor[j])?'0':'1';
        }
    }
}
//appending data crc remainder
strcat(data,temp+data1);
printf("data with crc remainder %s",data);

}
int main(){
char data[30],div[15];
printf( "enter the data: ");
scanf("%s",data);
printf( "enter the div: ");
scanf("%s",div);
crc_sender(data,div);
}
