#include<stdio.h>

int main(){
int row,col,a[100][100],t[100][100];
printf("enter row and column");
scanf("%d %d",&row,&col);
printf("enter array");
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d  ", &a[i][j]);
    }
}
printf( "print matrix");
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d  ", a[i][j]);
    if (j == col - 1)
    printf("\n");
  }
    }

for (int i = 0; i < row; i++){
  for (int j = 0; j < col; j++) {
    t[j][i] = a[i][j];
  }
}
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i <col; i++){
  for (int j = 0; j <row; j++) {
    printf("%d  ", t[i][j]);
    if (j == row - 1)
    printf("\n");
  }
  return 0;
}
}

