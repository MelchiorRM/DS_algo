#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
int main(){
    int N;
    cin>>N;
    cin.ignore();
    vector<int> frequency(26,0);
    string line;
    for(int i=0;i<N;i++){
        getline(cin, line);
        for(char c:line){
            if(isalpha(c)){
                c=toupper(c);
                frequency[c-'A']++;
            }
        }
    }
    vector<pair<char, int>>letters;
    for(int i=0;i<26;i++){
        if(frequency[i]>0){
            letters.push_back({char('A'+i), frequency[i]});
        }
    }
    sort(letters.begin(), letters.end(),[](const pair<char, int>& a, const pair<char, int>& b){
        if(a.second !=b.second)
            return a.second > b.second;
        return a.first < b.first;
    });
    for(auto &pair : letters){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    return 0;
}