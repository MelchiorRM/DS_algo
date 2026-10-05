#include <iostream>
#include <string>
using namespace std;
int main(){
    string hostel;
    while(cin>>hostel){
        int n=0;
        int length=hostel.length();
        int lastX=-1;
        for(int i=0;i<length;i++){
            if(hostel[i]=='X'){
                int gap=i-lastX-1;
                if(lastX==-1){
                    //left eddge
                    n=gap-1;
                } else{
                    //middle
                    n=max(n,(gap-1)/2);
                }
                lastX=i;
            }
        }//right edge
        int gap =length-lastX-1;
        n=max(n,gap-1);
        cout<<n<<endl;
    }
    return 0;
}