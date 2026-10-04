class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int>map;

        map[0]=1;

        int sum=0;
        int count=0;

        for(int num:nums){
            sum+=num;

            int needed = sum - k ;

            if(map.find(needed) != map.end()){
                count+=map[needed];
            }
            map[sum]++;
        }
            return count;
    }
};