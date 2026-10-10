class Solution {
public:
    int maximumEle(vector<int>piles){
        int maxi= piles[0];
        for(int i = 1; i<piles.size() ; i++){
            maxi = max(maxi , piles[i]);
        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = maximumEle(piles);
        int ans;
        while(low<= high){
            int mid = low + (high -low) / 2;
            int totalhrs = 0;
            
           for (int i = 0; i < n; i++) {
    totalhrs += piles[i] / mid;

    if (piles[i] % mid != 0) {
        totalhrs++;
    }

    if (totalhrs > h) {
        break;
    }
}
            if(totalhrs <= h){
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