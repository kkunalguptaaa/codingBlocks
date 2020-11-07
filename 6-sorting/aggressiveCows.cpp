#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool canPutCows(vector<int> &pos,int n,int c,int minDistance){
    int prevPos=pos[0];  //for max distance we have to place first cow at first pos, i.e at index 0.
    int placedCows=1;
    for(int i=1;i<n;i++){
        if(pos[i]-prevPos>=minDistance){
            placedCows++;
            prevPos=pos[i];
            if(placedCows>=c){
                return true;
            }
        }
    }
    return false;
}
int findMinimumLargestDistance(vector<int> &pos,int n,int c){
    sort(pos.begin(),pos.end()); //sort all indices
    int s=0;
    int e=pos.back()-pos[0];
    int mid;
    int ans=0;
    while(s<=e){
        mid=(s+e)/2;
        if(canPutCows(pos,n,c,mid)){
            ans=max(ans,mid);
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int n,c;
    vector<int> pos;
    cin >> n >> c;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        pos.push_back(temp);
    }
    int res=findMinimumLargestDistance(pos,n,c);
    cout << res << endl;
}