#include<iostream>
#include<algorithm>
using namespace std;
int main () {
	int x,y;
	cin >> x >> y;
	int a=x;
	int b=a;
	int maxm=0;
	for(a=x;a<=b;a++){
		for(b=a;b<=y;b++){
			maxm=max(maxm,a^b);
		}
	}
	cout << maxm;
	return 0;
}
//          OR(more efficient)


// #include "iostream"
// using namespace std;
// int main(int argc, char* argv[])
// {
//     int x,y;
//     cin>>x>>y;
//     int num = x^y;
//     int msb=0;
//     while(num!=0) {
//         num=num>>1;
//         msb++;
//     }
//     int result = 1;
//     while(msb--) {
//         result=result<<1;
//     }
//     cout<<result-1;

//     return 0;
// }
