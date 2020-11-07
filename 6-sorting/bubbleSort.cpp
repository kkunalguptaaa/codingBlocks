#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
        bool noSwap=true;   //optimised solun it makes best case to O(n) as when array get sorted get stop.
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                noSwap=false;
			}
		}
        if(noSwap){
            break;
        }
	}
}
int main() {
	int arr[10000],n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	bubbleSort(arr,n);
	for(int i=0;i<n;i++)
		cout << arr[i] << endl;
	return 0;
}