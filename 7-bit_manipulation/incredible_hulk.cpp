#include<iostream>
using namespace std;

int countingSetBits(int n){
    int count=0;
    while(n>0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int steps=countingSetBits(n);
        cout << steps << endl;
    }
    return 0;
}