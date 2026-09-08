#include <iostream>
using namespace std;
int main(){
    long long cut;
    while(cin>>cut){
        if(cut<0 || cut>210000000) break;
        long long part=(((cut-1)*cut)/2)+1;
        cout<<part<<endl;
    }
    return 0;
}