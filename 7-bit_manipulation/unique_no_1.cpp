#include<iostream>
#include<vector>
using namespace std;
int unique_no_1(vector<int> &vec,int n){
    int res=vec[0];
    for(int i=1;i<n;i++){
        res=res^vec[i];
    }
    return res;
}
int main(){
    int n,i;
    vector<int> vec;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    int res=unique_no_1(vec,n);
        cout << res;
    return 0;
}