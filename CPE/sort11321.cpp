#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,M;
bool mini(int a, int b){
    if (a%M !=b%M) return (a%M<b%M);
    else {
        if (abs(a%2)!=abs(b%2)) return (abs(a%2)>abs(b%2));
        if(abs(a%2)) return a>b; //both are odd, normal descending
        return a<b; // both even, normal ascending
    }
}
int main(){
    vector<int>values;
    while(cin>>N>>M){
        if((N==0)&&(M==0)){
            values.clear();
            break;
        }
        values.resize(N);
        for(int i=0;i<N;i++){
            cin>>values[i];
        }
        sort(values.begin(), values.end(), mini);
        cout<<N<<" "<<M<<endl;
        for(int i=0;i<N;i++){
            cout<<values[i]<<endl;
        }
    }
    cout<<"0 0"<<endl;
    return 0;
}