class Solution {
public:
     static const long long MOD = 1000000007;
    long long modPow(long long x , long long y){
        x %= MOD;
        long long res = 1;
        while(y>0){
            if(y%2 == 1) res = (res*x)%MOD;
              x = (x * x) % MOD;

              y = y / 2;
        }

    return res;
        }
    int sumDecoded(vector<long long>& nums) {
        auto vornelqati = nums;
        long long ans = 0;
        for(long long num :nums){
            int width = num %10;
            long long d = num/10;

            string s= to_string(d);
            string xs = s.substr(0, width);
            string ys= s.substr(width);

            long long x = stoll(xs);
            long long y = stoll(ys);

            ans = (ans + modPow(x, y)) % MOD;
        }
        return (int)ans;
    }
};