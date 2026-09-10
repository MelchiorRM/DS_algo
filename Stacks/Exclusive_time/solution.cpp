class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n,0);
        vector<int> stack;
        int prevtime=0;
        for(const string& log : logs){
            int first=log.find(':');
            int second=log.find(":", first+1);
            string StrId=log.substr(0, first);
            string function=log.substr(first+1, second-first-1);
            string StrDuration=log.substr(second+1);
            int id=stoi(StrId);
            int duration=stoi(StrDuration);
            if (function=="start"){
                if(!stack.empty()){
                    ans[stack.back()]+=duration-prevtime;
                }
                stack.push_back(id);
                prevtime=duration;
            }
            else {
                ans[stack.back()]+=duration-prevtime+1;
                stack.pop_back();
                prevtime=duration+1;
            }
        }
        return ans;
    }
};