//wave print col wise
#include<iostream>
using namespace std;
int main() {
	int m,n,arr[10][10],i=0,j=0;
	cin >> m >> n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin >> arr[i][j];
		}
	}
	for(j=0;j<n;j++){
		if(j%2==0){
			for(i=0;i<m;i++){
				cout << arr[i][j] << ", ";
			}
		}
		else{
			for(i=m-1;i>=0;i--){
				cout << arr[i][j] << ", ";
			}
		}
	}
	cout << "END";
	return 0;
}