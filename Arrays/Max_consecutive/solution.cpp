class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int M=0;
            int counter=0;
            int n=nums.size();
            for(int i=0;i<n;i++){
                if(nums[i]==1){
                    counter++;
                }
                else{
                    counter=0;
                }
                if(counter>M){
                    M=counter;
                }
            }
            return M;
        }
    };