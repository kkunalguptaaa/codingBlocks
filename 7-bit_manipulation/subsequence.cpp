#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()<b.length();
}
void generate_subsequence(string str){
    int len=str.length();
    vector<string> vec;
    for(int i=0;i<(1<<len);i++){  //2^n-1 subsequnce for n size string
        string temp_str;
        int temp=i;
        int j=0;
        while(temp>0){
            if(temp&1){
                temp_str+=str[j];
            }
            temp=temp>>1;
            j++;
        }
        vec.push_back(temp_str);
    }
    sort(vec.begin(),vec.end(),cmp);
    for(auto x:vec){
        cout << x << endl;
    }
}
int main(){
    string str;
    cin >> str;
    generate_subsequence(str);
    return 0;
}