#include<iostream>
#include<cstring>
using namespace std;
char *my_strtok(char *str,char delim){
    int i=0;
    static char *input=NULL;
    //making first call
    if(str!=NULL){
        input=str;
    }
    //base case after returning last element i.e after end of string we have to return to end function call
    if(input==NULL){
        return NULL;
    }
    char *output=new char [strlen(input)+1]; //dynamic array
    for(i=0;input[i]!='\0';i++){
        if(input[i]!=delim){
            output[i]=input[i];
        }
        else{
            output[i]='\0';
            input =input+i+1;
            return output;
        }
    }
    //corner case if there is no delimator after last word it should return i.e in this case day should return
    output[i]='\0';
    input=NULL;
    return output;
}
int main(){
    char str[100]="Today is a rainy day!";
    char *ptr=NULL;
    ptr=my_strtok(str,' ');
    cout << ptr << endl;
    while(ptr!=NULL){
        ptr=my_strtok(NULL,' ');
        cout << ptr << endl;
    }
    return 0;
}