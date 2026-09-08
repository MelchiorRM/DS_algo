#include <iostream>
using namespace std;
#include <string>
int main(){
    string code="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string encoded="";
    string decoded="";
    while(getline(cin,encoded)){
        for(int i=0;i<encoded.size();i++){
            char c=encoded[i];
            c=tolower(c);
            size_t position=code.find(c);
            if(position!=string::npos && position>=2){
                decoded+=code[position-2];
            } else {
                decoded+=c;
            }
        }
    }
    cout<<decoded<<endl;
    return 0;
}