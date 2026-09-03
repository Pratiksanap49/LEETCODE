/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(arr) {
    let min = Infinity 
    let maxprofit = 0;
    for(let i = 0 ; i < arr.length ; i++){
        if(arr[i] < min) min = arr[i];

        let profit = arr[i] - min;

        if(profit > maxprofit) maxprofit = profit

    }
    return maxprofit;
    
};