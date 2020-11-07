#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<sstream>
using namespace std;
int main(){
    // string CurrentStr,largestStr;
    // string dummy;
    // int n,i;
    // cin >> n;
    // cin.get();
    // for(i=0;i<n;i++){
    //     getline(cin,CurrentStr);
    //     if(CurrentStr.size()>largestStr.size()){
    //         largestStr=CurrentStr;
    //     }
    // }
    // cout << largestStr << " " << largestStr.size();
    // char str[5]={'a','b','c','d','\0'};
    // cout << strlen(str) << sizeof str;
    int x=12345;
    stringstream ss;
    ss << x;
    string str;
    ss >> str;
    cout << str.length();

}