#include<stdio.h>
void quick(int A[], int n , int beg , int end, int *locptr){
int left,right, temp;
left=beg;
right=end;
*locptr=beg;
while(A[*locptr]<=A[right] && *locptr !=right){
    right--;
}
if(locptr==right)
    return;
if(A[*locptr]>A[right]){
    temp=A[*locptr];
    A[*locptr]=A[right];
    A[right]=temp;
    *locptr=right;
}
goto step - 3;
step 3:
    while(A[left]<=A[locptr] && left!= *locptr)
        left++;
    if(*locptr==left)
        return;
    if(A[left]>A[*locptr]){
        temp=A[left];
        A[left]=A[*locptr];
        A[*locptr]=temp;
        *locptr=left;
    }
    goto step 2:

}
void quick_sort(int A[], int N){
int top=-1,beg,end,loc;
int lower[10],upper[10];
if(N>1){
    top++;
    lower[top]=0;
    upper[top]=N-1;

}
while(top!=-1){
    beg=lower[top];
    end=upper[top];
    top--;
    quick(A,N,beg,end,&loc);
    if(beg<loc-1){
        top++;
        lower[top]=beg;
        upper[top]=loc-1;
    }
    if(loc+1<end){
        top++;
        lower[top]=loc+1;
        upper[top]=end;
    }
}

}
int main(){
int i;
int A[]={44,33,11,55,77,90,40,60,99,22,88,66};
quick_sort(A,12);
for(i=0;i<=11;i++){
    printf("%d",A[i]);
    getch();
}
}
