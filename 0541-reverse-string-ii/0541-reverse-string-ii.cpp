class Solution {
public:
void reverse (string &s , int l , int r){
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
}
    string reverseStr(string s, int k) {
        int n = s.length();
        for(int i = 0; i<n; i+=2*k){
            reverse(s , i,min(i+k-1,n-1) );
        }
        return s;
        }
        
    
};