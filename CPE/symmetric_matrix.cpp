#include <iostream>
using namespace std;
int main(){
    int cases,NumCase=1;
    cin>>cases;
    while(cases--){
        bool notFound=true;
        int N;
        cin>>N;
        long long matrix [N][N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>matrix[i][j];
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]!=matrix[j][i]){
                    cout<<"Test #"<<NumCase++<<": Non-symmetric."<<endl;
                    notFound=false;
                    break;
                }
                if(!notFound){
                    break;
                }
            }
        }
        if(notFound){
            cout<<"Test #"<<NumCase++<<": Symmetric."<<endl;
        }
    }
    return 0;
}