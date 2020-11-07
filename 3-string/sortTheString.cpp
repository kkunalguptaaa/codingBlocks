#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<algorithm>
using namespace std;
string extractToken(string str,int key){
    char *ptr;
    ptr=strtok((char *)str.c_str()," "); // for i=1
    for(int i=2;i<=key;i++){
        ptr=strtok(NULL," ");
    }
    return (string)ptr;
}
int convertToInt(string s){
    stringstream ss;
    ss << s;
    int x;
    ss >> x;
    return x;
}
bool numericCmp(pair <string,string> a,pair <string,string> b){
    return convertToInt(a.second) > convertToInt(b.second);
}
bool lexicalCmp(pair <string,string> a,pair <string,string> b){
    return a.second > b.second;
}

int main(){
    int n,key;
    string str[100];
    string cmp_type;
	bool reversed;
    cin >> n;
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin,str[i]);
    }
    pair <string,string> strPair[100];
    for(int i=0;i<n;i++){
        strPair[i].first=str[i];
        strPair[i].second=extractToken(str[i],key);
    }
    if(cmp_type=="numeric"){
        sort(strPair,strPair+n,numericCmp);
    }
    else{
        sort(strPair,strPair+n,lexicalCmp);
    }
	if(reversed!=true){
		for(int i=0;i<n;i++){
        cout << strPair[i].first<< endl;
   		}
	}
	else{
		for(int i=n-1;i>0;i--){
       		 cout << strPair[i].first<< endl;
		}
	}
    return 0;
}