#include <iostream>
using namespace std;
int main(){
    string numStr;
    while(cin>>numStr){
        int digitSum=0;
        int maxDigit=0;
        for(char c : numStr){
            digitSum += c - '0';
            maxDigit=max(maxDigit, c-'0');
        }
        int minBase=max(2, maxDigit+1);
        while(true){
            int expr=0;
            for(char c : numStr){
                expr=expr*minBase + (c-'0');
            }
            if(expr % digitSum ==0){
                cout<<minBase<<endl;
                break;
            }
            minBase++;
        }
    }
    return 0;
}