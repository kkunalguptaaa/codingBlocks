#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int arr[1000],n;
        cin >> n;
        for(int j=0;j<n;j++)
            cin >> arr[j];
        next_permutation(arr,arr+n);
        for(int j=0;j<n;j++)
            cout << arr[j];
    }
    return 0;
}