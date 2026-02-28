#include <iostream>
using namespace std;
int main(){
    long long a,b;
    while(cin>>a>>b){
        if(a==0 && b==0) break;
        long long c=0,d=0;
        while(a>0 || b>0){
            if((a%10+b%10+c)>9){
                d++;
                c=1;
            }
            else{
                c=0;
            }
            a=a/10;
            b=b/10;
            }
            if (d==0){
                cout<<"No carry operation";
            }
            else if(d==1){
                cout<<"1 carry operation";
            }
            else if(d>1){
                cout<<d<<" carry operations";
            }
            cout<<endl;
    }
    return 0;
}