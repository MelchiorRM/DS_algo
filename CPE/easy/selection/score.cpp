#include <iostream>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    while(cases--){
        int sum,diff,a,b;
        cin>>sum>>diff;
        a=(sum+diff)/2;
        b=sum-a;
        if(a-b==diff){
            cout<<a<<" "<<b;
        } else {
            cout<<"Impossible";
        }
        cout<<endl;
    }
    return 0;
}