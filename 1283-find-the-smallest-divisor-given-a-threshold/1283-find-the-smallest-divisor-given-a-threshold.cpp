class Solution {
public:
    int maximumEle(vector <int>&nums){
        int max = 0;
        for(int i = 0 ; i< nums.size(); i++){
            if (nums[i]>max){
                max = nums[i];
            }
        }
        return max;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int n = nums.size();
        int ans = -1;
        int high = maximumEle(nums);
        while (low <= high){
            int mid = low +(high - low)/2;
            int sum = 0 ; 
            for (int i = 0; i< n ; i++){
                sum = sum + ceil((double)nums[i]/mid);
            }
            if(sum <= threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};