#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int> numbers(n);
        vector<bool> valid(n, true);
        for(int i=0;i<n;i++){
            cin>>numbers[i];
        }
        int a=numbers[0];
        int b=1;
        for(int i=1;i<n;i++){
            if(numbers[i]<=a){
                valid[i]=false;
            } else{
                a=numbers[i];
                b++;
            }
        }
        cout<<b<<endl;
        for(int i=0;i<n;i++){
            if(valid[i]){
                if(i>0) cout<<" ";
                cout<<numbers[i];
            }
        }
        cout<<endl;
    }
    return 0;
}