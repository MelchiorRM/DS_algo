#include <iostream>
#include <cmath>
using namespace std;
long long countSq(long long a, long long b){
    long long x=(long long)ceil(sqrt(a));
    long long y=(long long)floor(sqrt(b));
    while(pow(x,2)<a) x++;
    while(pow(x-1,2)>=a) x--;
    while(pow(y,2)>b) y--;
    while(pow(y-1,2)<=b)y++;
    if(x>y) return 0;
    return y-x+1;
}
int main(){
    long long A,B,C;
    while(cin>>A>>B){
        if(A==0 && B==0) break;
        C=countSq(A,B);
        cout<<C<<endl;
    }
    return 0;
}
//Usage of while instead if to make sure the value of x and y are correct, because of the precision of double type.