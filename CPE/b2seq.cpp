#include <iostream>
#include <vector>
using namespace std;
int main(){
    int cases,Ncase=1;
    cin>>cases;
    vector<int> sequence;
    vector<bool> seqBool;
    while(cases--){
        bool seq=true;
        int curr,count;
        cin>>curr;
        sequence.resize(curr);
        for(int i=0;i<curr;i++){
            cin >> sequence[i];
            if(i>0 && (sequence[i] <= sequence[i-1] || sequence[i] <= 0)) seq = false;
        }
        if(!seq){
            cout<<"Case #"<<Ncase++<<": It is not a B2-Sequence."<<endl;
            continue;
        } else {
            int maxS=2*sequence[curr-1];
            seqBool.assign(maxS+1, false);
            int sum=0;
            for(int i=0;i<curr;i++){
                for(int j=i;j<curr;j++){
                    sum=sequence[i]+sequence[j];
                    if(seqBool[sum]){
                        seq=false;
                        break;
                    } else{
                        seqBool[sum]=true;
                    }
                }
                if(!seq){
                    break;
                }
            }
            cout<<"Case #"<<Ncase++<<": ";
            cout<<(seq?"It is a B2-Sequence.":"It is not a B2-Sequence.")<<endl;
        }
}
    return 0;
}