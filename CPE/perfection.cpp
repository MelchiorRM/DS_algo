#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    cout<<"Perfection output\n";
    int n;
    while(cin>>n){
        if(n==0) break;
        int sum=1;
        if(n==1){
            sum=0;
        } else {
            for(int i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    sum+=i;
                    if(i!=n/i){
                        sum+=n/i;
                    }
                }
            }
        }
        cout<<setw(5)<<n<<" ";
        if(sum<n )cout<<"DEFICIENT"<<endl;
        if(sum>n )cout<<"ABUNDANT"<<endl;
        if(sum==n)cout<<"PERFECT"<<endl;
    }
    cout<<"End of output\n";
    return 0;
}