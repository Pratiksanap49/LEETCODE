/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {

    let n = nums.length;
    let ans = new Array(n)
    let p = nums[0];
    ans[0] = 1 ;
    for(let i = 1 ; i < n ; i++){
        ans[i] = p ;
        p *= nums[i]
    }
    p = nums[n-1];
    for(let i = n-2 ; i >= 0 ; i--){
        ans[i] *=p ;
        p *= nums[i]
    }

    return ans;
    
};