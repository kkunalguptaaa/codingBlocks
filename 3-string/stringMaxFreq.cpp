#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string str;
	int maxm=0;
	cin >> str;
	char maxChar=str[0];
	sort(str.begin(),str.end());
	for(int i=0;i<str.length();i++){
		auto ptrU=upper_bound(str.begin(),str.end(),str[i]);
		auto ptrL=lower_bound(str.begin(),str.end(),str[i]);
		int freq=ptrU-ptrL;
		if(freq>maxm){
			maxm=freq;
			maxChar=str[i];
		}
	}
	cout << maxChar;
	return 0;
}