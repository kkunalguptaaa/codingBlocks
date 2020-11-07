//here he have to min return notes or coins for given  money 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] ={1,2,5,10,20,50,100,200,500,2000}; //kind of coins and notes
    int n=sizeof(arr)/sizeof(int);
    int money;
    cin >> money;
    while(money>0){
        int *it=upper_bound(arr,arr+n,money);
        int index=it-arr-1; //-1 for correct index as it points one greater element
        cout << arr[index] << ",";
        money=money-arr[index];
    }
    return 0;
}