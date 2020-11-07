//link- https://www.spoj.com/problems/AGGRCOW/
#include<iostream>
#include<algorithm>
using namespace std;
bool cowRakhPaye(int x[],int n, int c,int min_sepration){
    int count=1;
    int lastPos=x[0];
    for( int i=0;i<n;i++){
        if(lastPos+min_sepration<=x[i]){
            count++;
            lastPos=x[i];
            if(count==c){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    int ans=0;
    while(t--){
        int n,c,x[100];
        cin >> n >> c;
        for(int i=0;i<n;i++){

            cin >> x[i];
        }
        int s=0;
        int e=x[n-1]-x[0];
        while(s<=e){
            int mid=(s+e)/2;
            bool res=cowRakhPaye(x,n,c,mid);
            if(res){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        cout << endl << ans << endl;
    }
    return 0;
}