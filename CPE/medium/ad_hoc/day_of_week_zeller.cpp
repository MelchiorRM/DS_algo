#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int entries;
    cin>>entries;
    vector<string> dayName = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};  
    while(entries--){
        int y,m,d;
        cin>>y>>m>>d;
        int days =0;
        if(m<=2){
            y--;
            m+=12;
        }
        int day=(d+ 13*(m+1)/5 +y+y/400+y/4-y/100)%7;
        cout<<dayName[day]<<endl;
    }
    return 0;
}