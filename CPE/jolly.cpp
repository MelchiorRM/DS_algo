#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int N, num, result;
    bool flag=false;
    vector<bool> found;
    vector<int> numbers;
    while(cin>>N){
        numbers.resize(N);
        if (N==1){
            cout<<"Jolly"<<endl;
            continue;
        }
        for(int i=0;i<N;i++){
            cin>>numbers[i];
        }
         found.assign(N, false);
        for(int i=0;i<N-1;i++){
            result=abs(numbers[i]-numbers[i+1]);
            if(result < N && result >0){
                found[result]=true;
            }
        }
        for(int i=1;i<N;i++){
            if(!found[i]){
                flag=true;
                break;
            }
        }
        cout<<(flag?"Not Jolly":"Jolly")<<endl;
        flag=false;
    }
    return 0;
}