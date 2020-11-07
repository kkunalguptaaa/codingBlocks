#include<iostream>
#include<string>
#include<sstream>
using namespace std;
bool to_bool(char x){
    stringstream ss;
    ss << x;
    bool a;
    ss >> a;
    return a;
}
int main() {
	int t;
    cin >> t;
	for(int i=0;i<t;i++){
		string s1,s2;
		cin >> s1 >> s2; //or just comapre that s1==s2 then print 0 otherwise 1
        int len=s1.length(); //s1.length()==s2.length()
        for(int j=0;j<len;j++){
            bool a=to_bool(s1[j]);
            bool b=to_bool(s2[j]);
            bool res=!((a&b)|(!(a|b)));
            cout << res;
        }
        cout << endl;
	}
	return 0;
}