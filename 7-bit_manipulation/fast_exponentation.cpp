#include<iostream>
using namespace std;
long long my_pow(int n,int e){
    int ans=1;
    while(e>0){
        if(e&1){
            ans*=n;
        }
        e=e>>1;
        n=n*n;
    }
    return ans;
}
int main(){
    int num,exp;
    cin >> num >> exp;
    long long res=my_pow(num,exp);
    cout << res;
    return 0;
}