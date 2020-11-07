#include<iostream>
 using namespace std;
 int main(){
    int arr[]={1,2,3};
    int i,j,k,n=3;

    //generate all subarrays
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            //print elements of subarray
            for(k=i;k<=j;k++){
                cout << arr[k] <<",";
            }
            cout <<"\n";
        }
    }
    return 0;
 }