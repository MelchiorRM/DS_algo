#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(){
    long long x;
    string line;
    while(cin>>x){
        cin.ignore();
        getline(cin, line);
        stringstream ss(line);
        vector<long long> coef;
        long long num;
        while(ss>>num){
            coef.push_back(num);
        }
        long long result=0;
        long long degree=coef.size()-1;
        for(int i=0;i<degree;i++){
            result = result * x + coef[i] * (degree - i);
        }
        cout<<result<<endl;
    }
    return 0;
}