class Solution {
public:
    bool isPerfectSquare(int num) {

        int start = 0 , end = num;

        while(end>=start){

            int mid = start + (end - start) / 2 ;
            long long square = 1LL * mid * mid;

            if(square == num) return true;
            else if(square > num) end = mid - 1 ;
            else start = mid + 1 ;

        }

        return false;
        
    }
};