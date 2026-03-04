#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> lines;
    string s;
    int count=0;
    int max=0;
    while(getline(cin, s)){
        lines.push_back(s);
        count++;
        max=max>(int)s.size()?max:(int)s.size();
    }
    for(int i=0;i<max;i++){
        for(int j=0;j<count;j++){
            if(i<lines[j].size()){
                cout<<lines[j][i];
            }
        }
        cout<<endl;
    }
    return 0;
}