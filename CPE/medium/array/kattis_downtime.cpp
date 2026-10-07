#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c;
    while(cin>>a>>b){
        vector<int> time(a);
        int delay=1000;
        for(int i=0;i<a;i++){
            cin>>time[i];
        }
        int current,maximum=0;

        for(int i=0;i<a;i++){
            auto it=lower_bound(time.begin()+i, time.begin()+a, time[i]+delay);
            current=distance(time.begin(), it)-i;
            maximum=max(maximum,current);
        }
        c=(maximum+b-1)/b;
        cout<<c<<endl;
    }
}