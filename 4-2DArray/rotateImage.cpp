// problem link- https://hack.codingblocks.com/app/practice/6/1012/problem
#include<iostream>
#include<algorithm>
using namespace std;

void rotateImage(int arr[][100],int n){
    //reverse all the rows
    for(int i=0;i<n;i++){
         reverse(arr[i],arr[i]+n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j)
                swap(arr[i][j],arr[j][i]);
        }
    }
}
int main(){
    int n,i,j,arr[100][100];
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    rotateImage(arr,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}