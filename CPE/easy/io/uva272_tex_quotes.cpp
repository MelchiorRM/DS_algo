#include <iostream>
#include <string>
using namespace std;
int main(){
    string lines;
    bool first=true;
    while(getline(cin,lines)){
        for(char c : lines){
            if(c=='"'){
                cout<<(first?"``":"''");
                first=!first;
            } else {
                cout<<c;
            }
        }
        cout<<endl;
    }
    return 0;
}