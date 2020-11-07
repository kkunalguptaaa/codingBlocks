#include<iostream>
#include<algorithm>
using namespace std;
void insertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
		for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
		}
        swap(arr[j+1],temp);
	}
}
int main() {
	int arr[1000],n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	insertionSort(arr,n);
	for(int i=0;i<n;i++)
		cout << arr[i] << " ";
	return 0;
}