#include<iostream>
#include<algorithm>
using namespace std;

int bitonic(int arr[], int n)
{
    int inc[100]; // Length of increasing subarray ending at all indexes
    int dec[100]; // Length of decreasing subarray starting at all indexes
    int i, max;

    // length of increasing sequence ending at first index is 1
    inc[0] = 1;

    // length of increasing sequence starting at first index is 1
    dec[n-1] = 1;

    // Step 1) Construct increasing sequence array
    for (i = 1; i < n; i++)
    inc[i] = (arr[i] >= arr[i-1])? inc[i-1] + 1: 1;

    // Step 2) Construct decreasing sequence array
    for (i = n-2; i >= 0; i--)
    dec[i] = (arr[i] >= arr[i+1])? dec[i+1] + 1: 1;

    // Step 3) Find the length of maximum length bitonic sequence
    max = inc[0] + dec[0] - 1;
    for (i = 1; i < n; i++)
        if (inc[i] + dec[i] - 1 > max)
            max = inc[i] + dec[i] - 1;

    return max;
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        static int arr[100]={0},n=0;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        // int maxLen=maxBitonicSubArrayLength(arr,n);
        int maxLen=bitonic(arr,n);
        cout << maxLen << endl;
    }
    return 0;
}