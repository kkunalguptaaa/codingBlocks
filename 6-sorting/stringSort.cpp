#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(string a, string b){
   auto index1= a.find(b);
    auto index2= b.find(a);
    if(index1!=string::npos){
        return a>b;
    }
    else if(index2!=string::npos){
        return a<b;
    }
    else{
        return a<b;
    } 
}
int main(){
    int n;
    vector<string> vec;
    cin >> n;
    for(int i=0;i<n;i++){
        string temp;
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end(),cmp);
    for(auto x: vec){
        cout << x << endl;
    }
}