#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible( long long  n, long long  m, long long  x,  long long  y, long long  maxStudents){
     long long  requiredCoupons=maxStudents*x; // required Coupons to give scholarship to  maxStudent no. of students.
     long long  availableCoupons=m+(n-maxStudents)*y; //availableCoupons
    if(availableCoupons>=requiredCoupons){  //to give scholarhip to maxStudents availableCoupons > requiredCoupons.
        return true;
    }
    return false;
}
 long long  maxStudentGetScholarship( long long  n, long long  m, long long  x,  long long  y){
     long long  s=min(m/x,n);
     long long  e=n;
     long long  mid;
     long long  ans=0;
    while(s<=e){
        mid=(s+e)/2;
        if(isPossible(n,m,x,y,mid)){
            ans=max(mid,ans);
            s=mid+1;
        }
        else{
            e=mid-1;
        }  
    }
    return ans;
}
int main(){
    long long n,m,x,y;
    cin >> n >> m >> x >> y;
    long long  res=maxStudentGetScholarship(n,m,x,y);
    cout << res;
}