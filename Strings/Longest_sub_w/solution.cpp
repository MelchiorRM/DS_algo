class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int t=0;
            string str = "";
            for(int i=0;i<s.size();i++){
                bool duplicate=false;
                int position=0;
                for(int j=0;j<str.size();j++){
                    if(str[j]==s[i]){
                        duplicate = true;
                        position = j;
                        break;
                    }
                }
                if (duplicate){
                    str = str.substr(position+1);
                }
                str+=s[i];
                t=max(t, (int)str.size());
            }
            return t;
        }
    };