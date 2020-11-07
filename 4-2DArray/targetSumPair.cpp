#include<iostream>
#include<algorithm>
using namespace std;
void targetSumPair(int arr[],int n, int target){
	sort(arr,arr+n); // as we have to print the them in increasing order.
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            cout << arr[i] << " and " << arr[j] << endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    //Brute force O(n^2)
	// for(int i=0;i<n;i++){
	// 	for(int j=i+1;j<n;j++){
	// 		if(arr[i]+arr[j]==target){
	// 			cout << arr[i] << " and " << arr[j] << endl;
	// 		}
	// 	}
	// }
}
int main() {
	int n,arr[1000],target,i;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> arr[i];
	cin >> target;
	targetSumPair(arr,n,target);
	return 0;
}