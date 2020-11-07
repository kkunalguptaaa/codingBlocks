#include<iostream>
#include<algorithm>
using namespace std;
//     NAIVE APPROACH O(n^2)
// int calculateCapacity(int arr[],int n){
// 	if(n<=2){
// 		return 0;
// 	}
//     int i,j,totalCapacity=0;
//     int *left_max=NULL,*right_max=NULL;
//     for(i=1;i<n-1;i++){
//         left_max=max_element(arr,arr+i);
//         right_max=max_element(arr+i+1,arr+n);
//         int min_num=min(*left_max,*right_max); //min of left_max and right_max
//         if(min_num>arr[i]){
//             totalCapacity =totalCapacity+ min_num-arr[i];
//         }
//     }
//     return totalCapacity;
// }

//pre-compute the left_max in left[] and right_max i right[] and use them to find left_max and right_max of every
//element in O(n)
int calculateCapacity(int arr[],int n){
    static int left[1000000],right[1000000],totalCapacity=0;  //use static oterwise stack will go out of memory
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++){
        totalCapacity+=min(left[i],right[i])-arr[i];
    }
    return totalCapacity;
}
int main(){
    int n,arr[1000000],i;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> arr[i];
    int total_capacity=calculateCapacity(arr,n);

    cout << total_capacity;
}