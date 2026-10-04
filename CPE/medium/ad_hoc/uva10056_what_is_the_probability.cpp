#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double ProbaWin(int N, double p){
    double q = 1.0-p;
    return p/(1.0-pow(q,N));
}
int main(){
    int Numbers;
    double proba;
    while(cin>>Numbers>>proba){
        cout<<std::fixed<<std::setprecision(4);
        cout<<ProbaWin(Numbers, proba)<<endl;
    }
    return 0;
}