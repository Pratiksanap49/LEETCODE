/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(arr) {

    let currentsum = 0  , maxsum = arr[0] ;
    for(let i = 0 ; i < arr.length ; i++){
        currentsum += arr[i];
        if(currentsum > maxsum) maxsum=currentsum;
        if(currentsum<0) currentsum = 0;
    }
    return maxsum;
    
};