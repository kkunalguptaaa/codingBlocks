#include<iostream>
#include<algorithm>
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        int count_work=1;
        cin >> n;
        pair <int,int> timing[10000];
        for(int j=0;j<n;j++){
            int val1,val2;
            cin >> val1 >> val2;
            timing[j]=make_pair(val1,val2);
        }
        sort(timing,timing+n,comp); //sort acc to end time as for max no. of work we want to add work which end first
        int time=timing[0].second;
        for(int j=1;j<n;j++){
           if(time<=timing[j].first){
               count_work++;
               time=timing[j].second;
           }
        }
        cout << count_work << endl;
    }
    return 0;
}