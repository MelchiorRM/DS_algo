#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        char stack[128];
        int top=-1;
        bool valid=true;
        for(char c:s){
            if(c=='(' || c=='['){
                top++;
                stack[top]=c;
            }
            else if(c==')'){
                if(top==-1 || stack[top]!='('){
                    valid=false;
                    break;
                }
                top--;
            }
            else if(c==']'){
                if(top==-1 || stack[top]!='['){
                    valid=false;
                    break;
                }
                top--;
            }
        }
        if(top!=-1){
            valid=false;
        }
        cout<<(valid?"Yes":"No");
        cout<<endl;
    }
    return 0;
}