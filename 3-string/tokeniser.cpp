#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100]="Today is a rainy day!";
    char *ptr=NULL;
    ptr=strtok(str," ");
    cout << ptr << endl;
    while(ptr!=NULL){
        ptr=strtok(NULL," ");
        cout << ptr << endl;
    }
    return 0;
}

//NOte:- strtok is implimented in myTokeniser.cpp