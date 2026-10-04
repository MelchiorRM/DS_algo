#include <iostream>
#include <vector>
using namespace std;
int main(){
    int carTotal;
    vector<int>carArray;
    vector<bool>found;
    while(cin>>carTotal && carTotal!=0){
        carArray.resize(carTotal);
        found.assign(carTotal, false);
        bool valid=true;
        for(int i=0;i<carTotal;i++){
            int position=0;
            int car,gain;
            cin>>car>>gain;
            position=i+gain;
            if(position>=0 && position<carTotal && found[position]==false){
                carArray[position]=car;
                found[position]=true;
            } else{
                valid=false;
                continue;
            }
        }
        if(valid){
            for(int i=0;i<carTotal;i++){
                if(i>0) cout<<" ";
                cout<<carArray[i];
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}