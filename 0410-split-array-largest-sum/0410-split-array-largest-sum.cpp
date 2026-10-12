class Solution {
public:
    bool canpossible(vector <int>nums , int mid , int k){
        int sum = 0;
        int split = 1;
        for(int i = 0; i< nums.size();i++){
            if(sum + nums[i]<=mid){
                sum +=nums[i];
            }
            else{
                split++;
                sum = nums[i];
            }
        }
        if(split <= k){
            return true;
        }
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n) return -1;
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);
        int ans = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(canpossible(nums, mid , k) == true){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};