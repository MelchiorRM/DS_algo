#include <iostream>
using namespace std;
void bangla(long long a){
    if(a>=10000000){
        bangla(a/10000000);
        cout<<" kuti";
        a%=10000000;
        }
    if(a>=100000){
            cout<<" "<<a/100000<<" lakh";
                a%=100000;
            }
    if(a>=1000){
            cout<<" "<<a/1000<<" hajar";
            a%=1000;
            }
    if(a>=100){
            cout<<" "<<a/100<<" shô";
            a%=100;
        }
    if(a>0){
            cout<<" "<<a;
        }
    }
int main(){
long long n;
while(cin>>n){
    if(n==0) cout<<"0";
    else{
        bangla(n);
    }
    cout<<endl;
}
    return 0;
}