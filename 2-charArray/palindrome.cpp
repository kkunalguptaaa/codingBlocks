#include<iostream>
#include<iterator> // for iterators 
#include<cstring>
using namespace std;
bool ispalindromic(char *str){
    int i,j;
    i=0;
    j=strlen(str)-1;
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    // char str[20];
    // cin >> str;
    // if(ispalindromic(str)){
    //      cout << "It is palindromic string!";
    // }
    // else{
    //      cout << "It is not palindromic string!";
    // }
    char a[100];
    char *b=new char[100];
    cout << sizeof(a) << endl;
    cout << sizeof(*b) << endl;
}
