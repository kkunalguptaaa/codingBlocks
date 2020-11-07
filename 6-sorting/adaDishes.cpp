#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
bool isPossible(vector<int> &c,int n,int maxTime){
    int dishes1=1;
    int totalTime1=0;
    int dishes2=1;
    int totalTime2=0;
    for(int i=0;i<n;){
        if(totalTime1+c[i]<=maxTime){
            dishes1++;
            i++;
        }
        if(totalTime2+c[i]<=maxTime){
            dishes2++;
            i++;
        }
    }
    if(dishes1+dishes2<n){
        return false;
    }
    else{
        return true;
    }
}
int findMinTime(vector<int> &c,int n){
    int s=0;
    int e=0;
    for(int i=0;i<n;i++){
        e+=c[i];
    }
    int ans=INT_MAX;
    while(s<=e){
        int mid=(s+e)/2;
        if(isPossible(c,n,mid)){
            ans=min(ans,mid);
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int t;
    while(t--){
        int n;
        vector<int> c;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            c.push_back(temp);
        }
        int res=findMinTime(c,n);
        cout << res << endl;
    }
    return 0;
}