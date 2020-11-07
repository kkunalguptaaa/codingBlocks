#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(pair<string, int> emp1,pair<string, int> emp2){
    if(emp1.second==emp2.second){
        return emp1.first < emp2.first;
    }
    return emp1.second>emp2.second;
}
int main(){
    int x,n;
    cin >> x;
    cin >> n;
    pair<string, int> emp;
    vector<pair<string, int>> vec;
    for(int i=0;i<n;i++){
        string name;
        int salary;
        cin >> name >> salary;
        emp=make_pair(name,salary);
        vec.push_back(emp);
    }
    sort(vec.begin(),vec.end(),cmp);
    for(auto k:vec){
        if(k.second>=x){
            cout << k.first << " " << k.second << endl;
        }
    }
    return 0;
}