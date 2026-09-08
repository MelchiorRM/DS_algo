#include <iostream>
#include <string>
using namespace std;
int getValue(char c){
        if(c>='0' && c<='9') return c-'0';
        return c-'A'+10;
    }
int main(){
    string s;
    while(cin>>s){
        int sum=0;
        int maxDigit=0;
        for(char c:s){
            int value=getValue(c);
            sum+=value;
            maxDigit=max(maxDigit, value);
        }
        int base=max(2, maxDigit+1);
        while(true){
            int mod=0;
            for(char c:s){
                int value=getValue(c);
                mod=(mod*base+value)%sum;

            }
            if(mod==0){
                cout<<base<<endl;
                break;
            }
        }
    }
    return 0;
}