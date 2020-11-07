#include<iostream>
using namespace std;
int decimal_to_binary(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        ans+=(n&1)*pow;
        n=n>>1;
        pow*=10;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int res=decimal_to_binary(n);
    cout << res;
}