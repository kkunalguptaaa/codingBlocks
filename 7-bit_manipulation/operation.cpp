#include<iostream>
#include<algorithm>
using namespace std;

int getBit(int n,int i){
    int mask=(1<<i);
    int bit=(n&mask)>0?1:0;
    return bit;
}
void setBit(int &n,int i){
    int mask=(1<<i);
    n=n|mask;
}
void clearBit(int &n,int i){
    int mask=~(1<<i);
    n=n&mask;
}
void clearLastIBits(int &num,int no_last_bits){
    //note here i is number not index so it starts from 1.
    int mask=(-1<<no_last_bits);
    num=num&mask;
}
void clearRangeItoJ(int &n, int i,int j){
    int b=(-1<<j+1); //j is index start from 0 so add 1
    int a= ~(-1<<i); // OR (1<<i)-1; this is equals to 2^n -1 which has n no of 1 in last i.e.for n=3, 0000111
    int mask=a|b;
    n=n&mask;
}
void replaceBits(int &n,int m,int i,int j){
    int mask=m<<i;
    clearRangeItoJ(n,i,j);
    n=n|mask;
}
int countingSetBit(int n){ //all complexities are n.
    int count=0;
    while(n>0){
        if(n&1==1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int countingSetBitFast(int n){ //in worst case when arr digits are ine it is O(n) itherwise
    int count=0;
    while(n>0){
        n=n&n-1;  //it removes least significant set bit.
        count++;
    }
    return count;
}
int main(){
    int n,m,i,j;
    cin >> n;
    // cout << getBit(n,i);
    //setBit(n,i);
    //clearBit(n,i);
    //clearLastIBits(n,i);
    //clearRangeItoJ(n,i,j);
    //replaceBits(n,m,i,j);
    //int res=countingSetBit(n);
    //int res=countingSetBitFast(n);
    //Note we also have stl function to count set bits:
    int res=__builtin_popcount(n);
    cout << res;
    return 0;
}