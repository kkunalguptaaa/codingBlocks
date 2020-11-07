#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
bool canDistributeBooks(vector<int> &books,int no_books,int students,int max_pages){
    int student_used=1;
    int pages=0;
    for(int i=0;i<books.size();i++){
        if(pages+books[i]<=max_pages){
            pages+=books[i];
        }
        else{
            pages=books[i];
            student_used++;
            if(student_used>students){
                return false;
            }
        }
    }
    return true;
}
int findMinPages(vector<int> &books,int no_books,int students){
    int s=books[books.size()-1];
    int sum=0;
    int ans=INT_MAX;
    for(int i=0;i<books.size();i++){
        sum+=books[i];
    }
    int e=sum;
    int mid=(s+e)/2;
    while(s<=e){
        mid=(s+e)/2;
        if(canDistributeBooks(books,no_books,students,mid)){
            ans=min(ans,mid);
            e=mid-1;
        } 
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){

    int t;
    cin >> t;
    while(t--){
        int no_books,students;
        vector<int> books;
        cin >> no_books >> students;
        for(int i=0;i<no_books;i++){
            int book;
            cin >> book;
            books.push_back(book);
        }
        int res=findMinPages(books,no_books,students);
        cout << res;
    }
}