#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void my_linear_sort(vector<int> &vec,int n){
    int arr1[100];
    int arr[3]{0,0,0}; //as it only has 0,1,2 as elements
    for(int i=0;i<n;i++){
        arr[vec[i]]++;
    }
    int index_0=0,index_1=arr[0],index_2=arr[0]+arr[1]; //index_1=no of 0's as indexing start from 0
    for(int i=0;i<n;i++){
        if(vec[i]==0){
            arr1[index_0]=vec[i];
            index_0++;
        }
        else if(vec[i]==1){
            arr1[index_1]=vec[i];
            index_1++;
        }
        else if(vec[i]==2){
            arr1[index_2]=vec[i];
            index_2++;
        }
    }
    for(int i=0;i<n;i++){
        vec[i]=arr1[i];
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
    my_linear_sort(vec,n);
    for(auto x:vec){
        cout << x << " ";
    }
    return 0;
}