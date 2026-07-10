class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        if (n == 1)
            return nums[0] == target ? 0 : -1;

        if (n == 2) {
            if (target == nums[0]) return 0;
            if (target == nums[1]) return 1;
            return -1;
        }

        int start = 0;
        int end = n - 1;

        // pivot
        int pivot = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (mid == 0)
                start = mid + 1;
            else if (mid == n - 1)
                end = mid - 1;
            else if (nums[mid] < nums[mid + 1] && nums[mid] < nums[mid - 1]) {
                pivot = mid;
                break;
            }
            else if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
                pivot = mid + 1;
                break;
            }
            else if (nums[mid] > nums[end]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        // Array  not rotated
        if (pivot == -1)
            pivot = 0;

        if (pivot == 0) {
            start = 0;
            end = n - 1;
        }
        else if (target >= nums[0] && target <= nums[pivot - 1]) {
            start = 0;
            end = pivot - 1;
        }
        else {
            start = pivot;
            end = n - 1;
        }

        //  Search
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }

        return -1;
    }
};