//read inclusion exlusion problem for theory
#include<iostream>
#include<vector>
using namespace std;

int calculate_divisible_num(vector<int> &vec,int range){
    int len=vec.size();
    int res=0;
    for(int i=1;i<(1<<len);i++){  //2^n-1 subsequnce for n size string, nul is not included
        int temp=i;
        int divisior=1;
        int j=0;
        int count=0;   
        while(temp>0){
            if(temp&1){
                divisior=divisior*vec[j];
                count++;
            }
            temp=temp>>1;
            j++;
        }
        if(count%2==0){
            res=res-(range/divisior);
        }
        else{
            res=res+(range/divisior);
        }
    }
    return res;
}
int main(){
    int n,range;
    cin >> n;
    cin >> range;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    int res=calculate_divisible_num(vec,range-1);   //as 1000 is not included i.e. range is not included [0,range)
    cout << res;
    return 0;
}