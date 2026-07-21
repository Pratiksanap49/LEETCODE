class Solution {
public:
    int missingNumber(vector<int>& nums) {

        unordered_map<int,int>mp;

        for(int num:nums){
            mp[num]++;
            // if(mp[num]==0) return num;
        }

        for (int i = 0; i <= nums.size(); i++) {
            if (mp[i] == 0)
                return i;
        }
         return -1;
        
    }
};