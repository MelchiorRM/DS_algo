class Solution {
    public:
        vector<int> findErrorNums(vector<int>& nums) {
            int n=nums.size();
            int a=0;
            int b=0;
            vector<int>count(n+1);
            for(int num:nums){
                count[num]++;
            }
            for(int i=1;i<=n;i++){
                if(count[i]==2) a=i;
                if(count[i]==0) b=i;
            }
            return {a,b};
        }
    };