#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int myBinarySearch(vector<int> &vec, int m){
    int l=0;
    int h=vec.size();
    while(l<=h){
        int mid=(l+h)/2;
        if(vec[mid]==m){
            return mid;
        }
        else if(vec[mid]<m){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,m;
    vector<int> vec;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> m;
    int res=myBinarySearch(vec,m);
    cout << res;
}