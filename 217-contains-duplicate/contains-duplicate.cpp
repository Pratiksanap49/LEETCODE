class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int,int>mp;

        for(int num:nums){
            mp[num]++;
        }

        for(int num:nums){
            if( mp[num] > 1 ) return 1 ;
        }

        return 0;
        
    }
};