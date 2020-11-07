//link- https://hack.codingblocks.com/app/practice/1/1365/problem
#include<iostream>
#include<algorithm>
#include <numeric>
#include <climits>
using namespace std;
bool canDistributed(int books[],int n,int max_pages,int m){
    int student_used=1;
    int pages_student=0;
    for(int i=0;i<n;i++){
        if(pages_student+books[i]>max_pages){
            pages_student=books[i];
            student_used++;
            if(student_used>m){
                return false;
            }
        }
        else{
            pages_student+=books[i];
        }
    }
   return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        int ans=INT_MAX;
        cin >> n >> m;
        int books[100];
        for(int i=0;i<n;i++){
            cin >> books[i];
        }
        int mid;
        int s=books[n-1]; //min no if pages a student can read as every student has to read atleaast a book
        int e=0;
        for(int i=0;i<n;i++){ //sum of all the pages which is the max no of pages a student can read
            e+=books[i];
        }
        while(s<=e){
            mid=(s+e)/2;
            bool res=canDistributed(books,n,mid,m);
            if(res){
                ans=min(mid,ans);
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        cout << ans;
    }
    return 0;
}