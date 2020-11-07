#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin >> str;
    char ch=str[0];
    int freq=1;
    for(int i=1;i<str.length();i++){
        if(ch!=str[i]){
            cout << ch << freq;
            ch=str[i];
            freq=1;
        }
        else{
            freq++;
        }
    }
    cout << ch << freq;
    return 0;
}