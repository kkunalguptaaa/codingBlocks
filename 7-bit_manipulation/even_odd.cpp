#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(num&1){
        cout << "Number is odd!"; 
    }else{
        cout << " Number is even!";
    }
    return 0;
}