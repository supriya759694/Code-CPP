#include<iostream>
using namespace std;
int main(){
int row,col,a[100][100],b[100][100],sum[100][100];
cout<< "enter the row and column"<<endl;
cin>>row>>col;
cout<<"enter 1st array"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>a[i][j];
    }
}
cout<<"enter 2nd array"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>b[i][j];
    }

}
cout<<"sum of array"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        sum[i][j] = a[i][j] + b[i][j];
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<sum[i][j]<< " ";
        if (j == col - 1)
            cout<<endl;
    }
}
}
