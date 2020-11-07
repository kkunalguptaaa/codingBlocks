#include<iostream>
 using namespace std;
 int main(){
    int arr[]={1,2,3};
    int i,j,k,n=3,sum,maxSum=0,left,right;

    //generate all subarrays
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            sum=0;
            //print elements of subarray
            for(k=i;k<=j;k++){
                cout << arr[k] <<",";
                sum=sum+arr[k];
                if(maxSum<sum){
                    left=i; // will be used for printug max sub array
                    right=j;
                    maxSum=sum;
                }
            }
            cout <<"\n";
        }
    }
    //print maxSum sub array
    for(i=left;i<right;i++){
        cout << arr[i];
    }
    cout << "\n" << maxSum;
    return 0;
 }