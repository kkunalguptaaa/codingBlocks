#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cin >> str;
    int i=0;
    if(str[0]=='9'){ // as first digit ca'nt be zero
        i++;
    }
    for(;str[i]!='\0';i++){
        stringstream ss,ss1;
        ss << str[i];
        int val;
        ss >> val;
        if(val>(9-val)){
            val=9-val;
        }
        char temp;
        ss1 << val;
        ss1 >> temp;
        str[i]=temp;
    }
    for(int i=0;str[i]!='\0';i++){
        cout << str[i];
    }
    return 0;
}