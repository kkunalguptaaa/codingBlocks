#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int unique_no3(vector<int> &vec,int n){
    int max_num=vec[0];
    int max_num_index=0;
    vector<int> sum_bit(n,0); //initilise a vector with 0 n values
    for(int i=1;i<n;i++){
        if(max_num<vec[i]){
            max_num=vec[i];
            max_num_index=i;
        }
    }
    int k=0;
    while(vec[max_num_index]>0){
        for(int i=0;i<n;i++){
            if(vec[i]&1){
               sum_bit[k]++; 
            }
            vec[i]=vec[i]>>1;
        }
        k++;
    }
    for(int i=0;i<k;i++){
        sum_bit[i]%=3;
    }
    int res=0;
    for(int i=0;i<k;i++){  
        res=res+(sum_bit[i]*pow(2,i));
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
    int res=unique_no3(vec,n);
        cout << res;
    return 0;
}