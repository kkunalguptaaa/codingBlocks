//It will use commulative sum for finding the sum of array
#include<iostream>
#include<algorithm>
 using namespace std;
 int main(){
    int arr[]={1,2,3};
    int i,n=3,cs=0,ms=0;
    for(i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ms=max(ms,cs);
    }
    cout << "\n" << "maxSum: " << ms;
    return 0;
 }