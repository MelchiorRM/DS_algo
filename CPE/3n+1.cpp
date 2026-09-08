#include <iostream>
using namespace std;
int main(){
long long a,b,start,end;
    while(cin>>a>>b){
        start = a<b? a:b;
        end = a>b? a:b;
        int count,max=0;
        for(long long n=start;n<=end;n++){
            count=1;
            long long temp = n;
            while(temp!=1){
                temp=temp%2 ? 3*temp+1: temp/2;
                count++;
            }
            max=count>max?count:max; 
        }
        cout<<a<<" "<<b<<" "<<max<<endl;
    }
    return 0;
}