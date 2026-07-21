class Solution {
public:
    int arrangeCoins(int n) {

        long long ans = 0;
        int count = 0 ;
        
        for(int i = 1 ; i <= n ; i++ ){
            ans += i;
            count++;
            if(ans==n) return count;
            if(ans>n) return count-1;
            
        }

        return count;

    }
};