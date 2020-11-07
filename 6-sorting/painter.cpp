#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
bool canPaintAll(vector<int> &boards,int k,int t,int maxTime){
    int painter=1;
    int board_painted=0;
    for(int i=0;i<boards.size();i++){
        if((board_painted+boards[i])*t<=maxTime){
            board_painted+=boards[i];
        }
        else{
            board_painted=boards[i];
            painter++;
            if(painter>k){
                return false;
            }
        }
    }
    return true;
}
int minPaintTime(vector<int> &boards,int k,int t){
    sort(boards.begin(),boards.end());
    int s=boards[boards.size()-1]*t;
    int sum=0;
    for(int i=0;i<boards.size();i++){
        sum+=boards[i];
    }
    int e=sum*t;
    int mid;
    int ans=INT_MAX;
    while(s<=e){
        mid=(s+e)/2;
        if(canPaintAll(boards,k,t,mid)){
            ans=min(mid,ans);
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,k,t;
    cin >> n >> k >> t;
    vector<int> boards;
    for(int i=0;i<n;i++){
        int board;
        cin >> board;
        boards.push_back(board);
    }
    int res=minPaintTime(boards,k,t);
    cout << res % 10000003 << endl;
}