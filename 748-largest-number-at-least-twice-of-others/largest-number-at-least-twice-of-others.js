/**
 * @param {number[]} nums
 * @return {number}
 */
var dominantIndex = function(arr) {
    let max = arr[0] , index = 0  ;
    for(let i = 1 ; i < arr.length ; i++ ){
        if(arr[i] > max) {
            max=arr[i];
            index=i;
        }
    }

    for(let i = 0 ; i < arr.length ; i++){
        if(arr[i]==max) continue
        else if(2*arr[i] > max) return -1;
    }

    return index;
    
};