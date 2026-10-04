#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    int N;
    cin>>N;
    map<string, int>count;
    string country, rest;
    for(int i=0;i<N;i++){
        cin>>country;
        getline(cin, rest);
        count[country]++;
    }
    for(auto &entry : count){
        cout<<entry.first<<" "<<entry.second<<endl;
    }
    return 0;
}