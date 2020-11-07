#include<iostream>
#include<vector>
using namespace std;
int get_position_last_setBit(int n){
    int i=0;
    while(n>0){
        if(n&1){
            return i;
        }
        n=n>>1;
        i++;
    }
    return -1;      //never happens in this case we must have at least one set bit.
}
int getBit(int n,int i){
    int mask=(1<<i);
    int bit=(n&mask)>0?1:0;
    return bit;
}
void unique_no2(vector<int> &vec,int n){
    int res=vec[0];
    vector<int> temp;
    for(int i=1;i<n;i++){
        res=res^vec[i];
    }
    int pos=get_position_last_setBit(res);
    for(int i=0;i<n;i++){
        int match_bit=getBit(vec[i],pos);
        if(match_bit){
            temp.push_back(vec[i]);
        }
    }
    int res1=temp[0];
    for(int i=1;i<temp.size();i++){
        res1=res1^temp[i];
    }
    int res2=res^res1;
    cout << res1 << " " << res2;
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
    unique_no2(vec,n);
    return 0;
}