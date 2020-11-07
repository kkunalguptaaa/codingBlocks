//here we will rotate the sorted array and then we have to find the element
//link- https://hack.codingblocks.com/app/practice/6/1044/problem
#include<iostream>
#include<algorithm>
using namespace std;

int search_key(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[s]<=arr[mid]){ //mid lies in part 1 which is sorted
            if(arr[s]<key&&arr[mid]>key){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
             if(arr[mid]<key&&arr[e]>key){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n,arr[100],key;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cin >> key;
    int index=search_key(arr,n,key);
    cout << index;
    return 0;
}