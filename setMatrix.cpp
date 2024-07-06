#include<bits/stdc++.h>
using namespace std;

void setMatrixZero(vector<vector <int>> &arr){
int n=arr.size();
int m=arr[0].size();

//two vector create
vector<bool>row(n,false);
vector<bool>col(m,false);

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(arr[i][j] == 0){
            row[i]=true;
            col[j]=true;
        }

    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
            if(row[i] || col[j])
               arr[i][j]=0;
    }
    }
}


int main(){
     vector<vector<int>>arr = { { 0, 1, 2, 0 },
                                 { 3, 4, 5, 2 },
                                 { 1, 3, 1, 5 } };

    // Function call
    setMatrixZero(arr);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}


