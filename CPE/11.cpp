#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    while(cin>>a){
        int b;
        if (a=="0") break;
        b=0;
        for(int i=0;i<a.size();i++){
            int digit = a[i]-'0';
            b=i%2?b-digit:b+digit;
        }
        cout<<a<<" is "<<(abs(b)%11? "not " : "")<<"a multiple of 11."<<endl;
    }
    return 0;
}