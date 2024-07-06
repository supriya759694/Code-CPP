
#include<stdio.h>
#include<math.h>
 int fact(int );
float combi(int , int );

int fact(int n)
 {
    if(n==1)
        return 1;
     else
return fact(n-1)*n;
 }

 float combi(int n, int r)
 {
   float combi;
 combi= fact(n)/(fact(r)*fact(n-r));
 return combi;

 }

int main()
{
    int n,r;
    char s[100];
  float f;
  printf("Enter the string");
fgets(s,sizeof(s),stdin);
 n=strlen(s)-1;
    printf("enter the value of r\n");
    scanf("%d",&r);
   f= combi(n,r);
   printf(" all the possible combination of string is %f  ",f);
   return 0;
}
