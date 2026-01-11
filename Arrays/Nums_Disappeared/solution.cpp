class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            vector<bool>all(nums.size()+1,false);
            for(int i=0;i<nums.size();i++){
                all[nums[i]]=true;
            }
            vector<int>ans;
            for(int i=1;i<=nums.size();i++){
               if(!all[i]){
                ans.push_back(i);
               }
            }
            return ans;
        }
    };