#include<iostream>
#include<algorithm>
using namespace std;
int square_root(int num){
   int e=num;
    int s=1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if((mid*mid)==num){
            return mid;
        }
        else if((mid*mid)<num){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
float calculate_decimal(int res,int num){
    float inc=0.1;
    float res_final=res;
    for(int times=1;times<=4;times++){
        while(res_final*res_final<=num){
            res_final=res_final+inc;
        }
        res_final-=inc; //coz of last timw where condition got failed
        inc/=10; 
    }
    return res_final;
}
int main(){
    int num;
    cin >> num;
    int res=square_root(num);
    float final=calculate_decimal(res,num);
    cout << final;
    return 0;
}