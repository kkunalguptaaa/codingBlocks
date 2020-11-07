#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,arr[100][100],i,j,val=0;
    cin >> n >> m;
    int startRow=0,endRow=n-1,startCol=0,endCol=m-1;
    for(i=0;i<n;i++){
         for(j=0;j<m;j++){
            arr[i][j]=++val;
            cout << val << " ";
         }
         cout << endl;
    }
    cout << endl;
    while(startRow<=endRow && startCol<=endCol){
        //print start row
        for(i=startCol;i<=endCol;i++){
            cout << arr[startRow][i] << " ";
        }
        startRow++;
        //print end col
        for(i=startRow;i<=endRow;i++){
            cout << arr[i][endCol] << " ";
        }
        endCol--;

        //print end row
        if(endRow>startRow){  //to stop ER to print mid row already printed by SR
            for(i=endCol;i>=startCol;i--){
                cout << arr[endRow][i] << " ";
            }
        }
        endRow--;
        //print start col
        if(endCol>startCol){  //to stop EC to print mid row already printed by SC
            for(i=endRow;i>=startRow;i--){
                cout << arr[i][startCol] << " ";
            }
        }
        startCol++;
    }
    return 0;
}