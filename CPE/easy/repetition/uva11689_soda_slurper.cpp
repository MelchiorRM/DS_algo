#include <iostream>
using namespace std;
int main(){
    int test,a,b,c;
    cin>>test;
    int sum,count;
    while(test--){
        cin>>a>>b>>c;
        sum=a+b;
        count=0;
        while(sum>=c){
            count+=sum/c;
            sum=(sum%c)+(sum/c);
        }
        cout<<count<<endl;
    }
    return 0;
}