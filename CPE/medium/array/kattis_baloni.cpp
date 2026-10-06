#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    /*int n,m;
    while(cin>>n && n>0){
        m=0;
        vector<int> ballons(n);
        for(int i=0;i<n;i++){
            cin>>ballons[i];
        }
        while(!ballons.empty()){
            m++;
            int a=ballons[0];
            ballons.erase(ballons.begin());
            for(int i=0;i<(int)ballons.size();i++){
                if(ballons[i]==a-1){
                    a--;
                    ballons.erase(ballons.begin()+i);
                    i--;
                }
            }
        }
        cout<<m<<endl;
    }*/ // cost O(n^2)
    int n,m;
    while(cin>>n && n>0){
        m=0;
        vector<int> arrows(1000000,0);
        for(int i=0;i<n;i++){
            int arrow;
            cin>>arrow;
            if(arrows[arrow]>0){
                arrows[arrow]--;
            } else{
                m++;
            }
            arrows[arrow-1]++;
        }
        cout<<m<<endl;
    } 
    return 0;
}