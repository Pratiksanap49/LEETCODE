class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        int count=0;
        for(int i = 0 ; i < nums.size() ; i++){
            count += nums[i];
            ans[i]=count;
        }
        return ans;
    }
};