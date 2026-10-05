#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
struct Soldier{
        int left;
        int right;
    };
int main (){
    int n,m;
    while(cin>>n>>m && n!=0 && m!=0){
        vector<Soldier> soldiers(n+1);
        for(int i=1;i<=n;i++){
            soldiers[i].left=i-1;
            soldiers[i].right=i+1;
        }
        soldiers[1].left=0;
        soldiers[n].right=0;
        for(int i=0;i<m;i++){
            int L,R;
            cin>>L>>R;
            int leftSoldier,rightSoldier;
            leftSoldier=soldiers[L].left;
            rightSoldier=soldiers[R].right;

            if (leftSoldier == 0) {
                cout << "* ";
            } else {
                cout << leftSoldier << " ";
            }if (rightSoldier == 0) {
                cout << "*";
            } else {
                cout << rightSoldier;
            }
            cout<<endl;

            if(leftSoldier!=0){
                soldiers[leftSoldier].right=rightSoldier;
            }
            if(rightSoldier!=0){
                soldiers[rightSoldier].left=leftSoldier;
            }
        }
        cout<<"-"<<endl;
    }
    return 0;
}
