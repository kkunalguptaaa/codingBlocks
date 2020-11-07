// problem link- https://hack.codingblocks.com/app/practice/6/1012/problem
#include<iostream>
#include<algorithm>
using namespace std;

class index2d{
    public:
    int row=-1;
    int col=-1;
    index2d(int r,int c){
        row=r;
        col=c;
    }
};
index2d stairCaseSearch(int arr[][100],int m,int n,int key){
    //we will start from 0,n-1 index
    int i=0,j=n-1;
    while(j>=0 && i<m){
        if(key==arr[i][j]){
            index2d ind(i,j);
            return ind;
        }
        else if(key<arr[i][j]){
            j--;
        }
        else if(key>arr[i][j]){
            i++;
        }
    }
    index2d ind(-1,-1);
    return ind;

}
int main(){
    //Note it is only valid for sorted matrix
    int n,m,key,i,j,arr[100][100];
    cin >> m >> n >> key;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
    cout << endl;
    index2d ind= stairCaseSearch(arr,m,n,key);
    if(ind.row==-1||ind.col==-1){
        cout << key << " Not found!";
    }
    else{
        cout << ind.row << "," << ind.col << " " << arr[ind.row][ind.col];
    }
    return 0;
}