#include<iostream>
using namespace std;
int main(){
    int arr[10],n,i=0,j,sum,k;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> arr[i];
    cin >> sum;
    i=0;
    j=n;
    while(i<j){
        if(arr[i]+arr[j]==sum){
            cout << arr[i] << "," << arr[j] << "\n";
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<sum){
            i++;
        }
        else{
            j--;
        }
    }
    return 0;
}