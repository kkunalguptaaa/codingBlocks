#include<iostream>
#include<algorithm>
using namespace std;
int kadaneSum(int arr[],int n){
    int cs=0,ms=0;
    for(int i=0;i<n;i++){
        cs+=arr[i];
        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
    }
    return ms;
}
int maxCircularSubArraySum(int arr[], int n){
    //case1: when for max sub array sum no wrap happens so simply apply kadane
    int maxNoWrap=kadaneSum(arr,n);

    //case2 : when wraping is happening then we will find min sub array(no wrap) sum by inverting the array applying 
    //kadane and take its negative and then subtracting this min from arr sum it will give max sum

    //to get max sub arr sum we will subtract  min sum sub array from total sum here sum of non-contributing elements
    //will be equal to min sum sub array. prefixSum + suffixsum = total sum - sum from i+1 to j-1(i.e sum of 
    //non-contributing element) here i<j so to make prefixSum + suffixsum max we have to make non-contributing sum
    // min so it will be equal to min sum sub array.
    // let we have a array which have max sum with wraping the iin max sum it will have sum part in starting(prefix sum)
    // and some peart from last(suffix sum) now non-contributing part is in middle and min sub array is also 
    //present in min sum sum array. now if any middle part is not reducing the sum then it must be added to
    //prefix sum or suffix sum but if it is reducing the sum then it should be added to min sum sub array that's why
    // in this case min sum sub aaray is equals to sum of non-contributing elements.
    int arrSum=0;
    for(int i=0;i<n;i++){
        arrSum+=arr[i];
        arr[i]=-arr[i];
    }
    int minNoWrap=-kadaneSum(arr,n);
    int maxWrap=arrSum-minNoWrap;

    //compare wich case has greater value return it
    return(max(maxWrap,maxNoWrap));
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int arr[1000],n;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        int res=maxCircularSubArraySum(arr, n);
        cout << res << endl;
    }
}
