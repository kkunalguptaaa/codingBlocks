#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    char s1[10]={"ccoooding"};
    int current=1,prev=0;
    while(current<9){
        if(s1[current]!=s1[prev]){
            prev++;
            s1[prev]=s1[current];
        }
         current++;
    }
    s1[prev+1]='\0';
    cout << s1;
    return 0;
}
