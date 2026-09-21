class Solution {
   public:
    int bSearch(int start, int end, vector<int>& nums, int target) {
        if (start > end) return -1;
        int mid = start + (end - start) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] > target) {
            return bSearch(start, mid - 1, nums, target);
        } else {
            return bSearch(mid + 1, end, nums, target);
        }
    }

    int search(vector<int>& nums, int target) {
        int breakPoint = 0;
        int start = 0;
        int end = nums.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end])
                start = mid + 1;
            else
                end = mid;
        }
        breakPoint = start;
        cout << breakPoint;

        int index = bSearch(0, breakPoint - 1, nums, target);
        if (index == -1) index = bSearch(breakPoint, nums.size() - 1, nums, target);
        return index;
    }
};
