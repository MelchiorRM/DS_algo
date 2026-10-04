#include <iostream>
#include <vector>
using namespace std;
int main(){
    int cases,NumCase=1;
    cin>>cases;
    while(cases--){
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=a;i<=b;i++){
            sum+=i%2?i:0;
        }
        cout<<"Case "<<NumCase++<<": "<<sum<<endl;
    }
    return 0;
}