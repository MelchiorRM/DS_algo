#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string input;
    while(getline(cin,input)){
        string word="";
        for(char c:input){
            if(c!=' '){
                word+=c;
            } else {
                reverse(word.begin(), word.end());
                cout<<word<<" ";
                word="";
            }
            reverse(word.begin(), word.end());
            cout<<word<<endl;
        }
    }
    return 0;
}