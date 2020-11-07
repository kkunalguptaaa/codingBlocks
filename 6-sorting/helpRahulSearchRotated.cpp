//search a element in a rotated array
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findNum(vector<int> &vec,int k){
    int s=0;
    int e=vec.size()-1;
    int mid=(s+e)/2;
    while(s<=e){
        mid=(s+e)/2;
        if(vec[mid]==k){
            return mid;
        }
        if(vec[s]<vec[mid]){
            if(vec[s]<=k && k<vec[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(vec[mid]<k && k<=vec[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
                
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
    int num;
    cin >> num;
    int res=findNum(vec,num);
    cout << res;
}