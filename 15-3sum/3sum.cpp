class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int sum ;
        
        for(int i = 0 ; i < nums.size()-2 ; i++){

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int first = nums[i];
            int need = 0 - first;
            int left = i + 1;
            int right = nums.size()-1;

            while( right > left ){

                int current = nums[right] + nums[left];

                if(current == need){
                    ans.push_back({first, nums[left], nums[right]});
                

                while( left < right && nums[left] == nums[left+1])
                    left++;

                while( left < right && nums[left] == nums[left-1])
                    right;

                left++;
                right--;
                }
          
            else if(current < need){
                left++;
            }
            else{
                right--;
            }
        }
          }
          return ans;
    }
};