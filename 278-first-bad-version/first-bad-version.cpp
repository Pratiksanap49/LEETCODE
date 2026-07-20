// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        int start = 0 , end = n ;

        while(start <= end){

            int mid = start + ( end - start ) / 2 ;

            if(isBadVersion(mid) == false ) start = mid + 1 ;
            else if(isBadVersion(mid) == true){
                if( isBadVersion(mid-1) == false) return mid;
                end = mid - 1 ;
            }

        }

        return start;
        
    }
};