#include <iostream>
using namespace std;
int main(){
    long long a,b;
    while(cin>>a>>b){
        long long group =a;
        long long total=0;
        while(total<b){
            total+=group;
            group++;
        }
        cout<<group-1<<endl;
    }
    return 0;
}