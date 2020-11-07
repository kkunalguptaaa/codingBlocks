#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findLowerBound(vector<int> &vec,int q,int l,int h,int mid){
    int lb=mid;
    h=mid-1;
    while(l<=h){
        mid=(l+h)/2;
        if(vec[mid]==q){
           lb=mid;
           h=mid-1;
        }
        else if(vec[mid]<q){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return lb;
}
int findUpperBound(vector<int> &vec,int q,int l,int h,int mid){
    int ub=mid;
    l=mid+1;
    while(l<=h){
        mid=(l+h)/2;
        if(vec[mid]==q){
           ub=mid;
           l=mid+1;
        }
        else if(vec[mid]<q){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ub;
}
pair<int,int> findUpperAndLowerBound(vector<int> &vec,int q){
    int l=0;
    int h=vec.size();
    while(l<=h){
        int mid=(l+h)/2;
        if(vec[mid]==q){
            int lb=findLowerBound(vec,q,l,h,mid); //now element is found we will find lb
            int ub=findUpperBound(vec,q,l,h,mid);//now element is found we will find ub
            pair<int,int>bounds=make_pair(lb,ub);
            return(bounds);
        }
        else if(vec[mid]<q){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    pair<int,int>bounds=make_pair(-1,-1);
    return(bounds);
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
    int q;
    cin >> q;
    vector<int>queries;
    for(int i=0;i<q;i++){
        int query;
        cin >> query;
        queries.push_back(query);
    }
    for(int i=0;i<q;i++){
        pair<int,int>res=findUpperAndLowerBound(vec,queries[i]);
        cout << res.first << " " << res.second << endl;
    }
    return 0;
}
