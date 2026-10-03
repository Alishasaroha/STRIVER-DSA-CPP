class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        int high = n-1;
        if(n == 1){
            return nums[0];
        }
        while(low <= high){
            int mid = low +(high - low)/ 2;
            if(mid%2 == 1){
                mid--;
            }
            if(nums[mid]== nums[mid+1]) low = mid+2;
            else high = mid-1;

        }
        return nums[low];
    }
};