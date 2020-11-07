#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long kthRoot(long long n,long long k){
    long long l=0;
    long long h=n;
    long long mid=(l+h)/2;
	long long ans;
    while(l<=h){
        mid=(l+h)/2;
        if(pow(mid,k)==n){
            return mid;
        }
        else if(pow(mid,k)<n){
			ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        long long res=kthRoot(n,k);
        cout << res << endl;
    }
}