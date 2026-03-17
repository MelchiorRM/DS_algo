#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        vector<int>land;
        int x;
        while(cin>>x){
            if(x==0){
                break;
            } else {
                land.push_back(x);
            }
        }
        sort(land.begin(), land.end(), greater<int>());
        long long total=0;
        bool tooMuch=false;
        for(int i=0;i<land.size();i++){
            long long value=1;
            for(int j=0;j<i+1;j++){
                value*=land[j];
                if(value>5000000){
                    tooMuch=true;
                    break;
                }
            }
            total+=2* value;
            if(total>5000000){
                tooMuch=true;
                break;
            }
        }
        if(tooMuch){
            cout<<"Too expensive"<<endl;
        } else {
            cout<<total<<endl;
        }
    }
    return 0;
}