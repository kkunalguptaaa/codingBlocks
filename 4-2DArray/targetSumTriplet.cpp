#include<iostream>
#include<algorithm>
using namespace std;
void targetSumTriplet(int arr[],int n, int target){
	sort(arr,arr+n); // as we have to print the them in increasing order.
    int k,i,j;
    for(k=0;k<n;k++){
        i=k+1;
        j=n-1;
        while(i<j){
            if(arr[k]+arr[i]+arr[j]==target){
                cout << arr[k] << ", " << arr[i] << " and " << arr[j] << endl;
                i++;
                j--;
            }
            else if(arr[k]+arr[i]+arr[j]<target){
                i++;
            }
            else{
                j--;
            }
        }
    }
}
int main() {
	int n,arr[1000],target,i;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> arr[i];
	cin >> target;
	targetSumTriplet(arr,n,target);
	return 0;
}