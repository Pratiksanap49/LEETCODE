class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        // unordered_map<int,int>map;

        // for(int num:nums){
        //     map[num]++;
        // }

        // for()

        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];;
        
    }
};