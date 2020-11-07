#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void countingSort(vector<int> &vec,int n){
    int maxm=vec[0];
    for(int i=0;i<n;i++){
        maxm=max(vec[i],maxm);
    }
	int *count=new int[maxm+1]{0}; //dynamic array of maxm+1(as indexing starts from 0) size initilised to 0
	for(int i=0;i<n;i++){
        count[vec[i]]++;
    }
    int k=0;
    for(int i=0;i<=maxm;i++){
        while(count[i]!=0){
            vec[k]=i;
            k++;
            count[i]--;

        }
    }
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
    countingSort(vec,n);
    for(auto x:vec){
        cout << x << " ";
    }
    return 0;
}