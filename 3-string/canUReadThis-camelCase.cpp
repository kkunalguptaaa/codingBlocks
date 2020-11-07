#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin >> str;
	cout << str[0];
	for(int i=1;i<str.length();i++){
		if(str[i]>='A'&&str[i]<='Z'){
			cout << endl;
		}
		cout << str[i];
	}
    return 0;
}
