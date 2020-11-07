#include<iostream>
#include<algorithm>
#include <cmath> 
#include<string>
#include<sstream>
using namespace std;
bool comp(string a, string b){
    return a > b;
}
void mySort(string arr[], int n){
    sort(arr,arr+n,comp);
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string arr[100];
        int n;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        mySort(arr,n);
    }
}