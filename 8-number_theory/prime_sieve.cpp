#include<iostream>
using namespace std;
void print_prime(int n){
    int p[100]={1};
    for(int i=0;i<n;i++){
        for(int j=i*i;j*j<=n;j+=i){
            if(j%i!=0){
                p[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(p[i]==1){
            cout << i << " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    print_prime(n);
    return 0;
}