#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test){
        vector<int>St_Nb;
        int relative;
        cin>>relative;
        for(int i=0;i<relative;i++){
            int x;
            cin>>x;
            St_Nb.push_back(x);
        }
        sort(St_Nb.begin(), St_Nb.end());
        int median = St_Nb[St_Nb.size()/2];
        int sum=0;
        for(int st:St_Nb){
            sum+=abs(st-median);
        }
        cout<<sum<<endl;
        test--;
    }
    return 0;
}