#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;;

void multiply(vector<int> &res,int n){
    vector<int> res_cpy;
    int carry=0;
    for(int i=res.size()-1;i>=0;i--){
        int val=res[i]*n+carry;
        res_cpy.push_back(val%10);
        carry=val/10;
    }
    while(carry!=0){
        res_cpy.push_back(carry%10);
        carry=carry/10;
    }
    reverse(res_cpy.begin(),res_cpy.end());
    res.clear();
    for(int i=0;i<res_cpy.size();i++){
        res.push_back(res_cpy[i]);
    }
}
int main(){
    vector<int> res;
    int num;
    cin >> num;
    int temp=num;
    if(num==0||num==1){
        res.push_back(1);
    }
    else{
        int digit_count=0;
        while(temp!=0){
            int digit=temp%10;
            res.push_back(digit);
            temp=temp/10;
            digit_count++;
        }
        reverse(res.begin(),res.end());
        int num_cpy=num;
        while(num_cpy>1){
            num_cpy--;
            multiply(res,num_cpy);
        }
    }
    for (auto val : res){
        cout << val;
    } 
}