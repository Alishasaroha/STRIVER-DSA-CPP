class Solution {
public:
    int minimum (vector<int>bloomDay){
        int mini = bloomDay[0];
        for(int m:bloomDay){
            mini = min(m , mini);
        }
        return mini;
    }
    int maximum (vector<int>bloomDay){
        int maxi = bloomDay[0];
        for(int m:bloomDay){
            maxi = max(m , maxi);
        }
        return maxi;
    }
    bool isPossible(vector<int> bloomDay, int days, int m , int k ){
        int cnt = 0;
        int ans = 0;
        for(int i = 0 ; i< bloomDay.size() ; i++){
            if(bloomDay[i]<=days){
                cnt++;
            }
            else{
                ans = ans + (cnt/k);
                cnt = 0;
            }
        }
        ans = ans+(cnt/k);
        if(ans>=m){
            return true;
        }
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int flowers = 1LL *m*k;
        if(n<flowers) return -1;
        int low= minimum(bloomDay);
        int high = maximum(bloomDay);
        int res = -1;
        while(low<= high){
            int mid = low+(high -low)/2;
            if(isPossible(bloomDay , mid,m ,k) == true){
                res = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return res;
    }
};