#include<iostream>
#include<string>
using namespace std;
int canEscape(char str[][110],int n, int m, int k, int s){
    bool success=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s<k){
                return s;
            }
            if(str[i][j]=='.'){
                s-=2;
            }
            else if(str[i][j]=='*'){
                s+=5;
            }
            else if(str[i][j]=='#'){
                break;
            }
            if(j!=n-1){
                s--;
            }
        }
    }
    if(s>k){
        return s;
    }
    else{
        return 0;
    }
    
}
int main(){
    int n,m,k,s;
    cin >> n >> m >> k >> s;
    char str[110][110];
    cin.get();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> str[i][j];
        }
    }
    int res=canEscape(str,n,m,k,s);
    if(res>k){
        cout << "Yes" << endl << res;
    }
    else{
        cout << "No";
    }
    return 0;
}
