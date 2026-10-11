class Solution {
public:
    int fun(vector<int>weights, int capacity){
        int days = 1;
        int load=0;
        for(int i =0 ; i< weights.size(); i++){
            if(load + weights[i] >capacity){
                days++;
                load = weights[i];
            }
            else load +=weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int high = accumulate(weights.begin(), weights.end(), 0);
        int low = *max_element(weights.begin(), weights.end());
        int ans = low;
        while(low<= high){
            int mid = low+(high-low)/2;
            int daysrequired = fun(weights , mid);
            if(daysrequired > days){
                low= mid+1;
            }
            else{
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }
};