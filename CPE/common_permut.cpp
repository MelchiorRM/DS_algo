#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    string a,b;
    while(getline(cin,a)&&(getline(cin,b))){
        map<char,int> count_a, count_b;
        for(char c:a){
            if(isalpha(c)) count_a[c]++;
        }
        for(char c:b){
            if(isalpha(c)) count_b[c]++;
        }
        for(auto &entry : count_a){
            char c=entry.first;
            int found=min(count_a[c], count_b[c]);
            for(int i=0;i<found;i++){
                cout<<c;
            }
        }
        cout<<endl;
        count_a.clear();
        count_b.clear();
    }
    return 0;
}