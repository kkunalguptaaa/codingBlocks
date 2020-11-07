//search pivot element in a rotated array
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findPivot(vector<int> &vec){
    int s=0;
    int e=vec.size()-1;
    int mid=(s+e)/2;
    while(s<=e){
        mid=(s+e)/2;
        if(vec[mid]>vec[mid+1]){
            return mid;
        }
        if(vec[s]<vec[mid]){
            if(vec[s]>=vec[e]){
                s=mid;
            }
            else{
                return -1;
            }
        }
        else{
            if(vec[s]>=vec[e]){
                e=mid;
            }
            else{
                return -1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    int res=findPivot(vec);
    cout << res;
    return 0;
}