class Solution {
public:
    void solve(string &ans, vector<string> &result, int open , int close, int n){
        if(close == n ){
            result.push_back(ans);
            return ;
        }
        if(open < n){
            ans.push_back('(');
            solve(ans , result , open+1 , close, n);
            ans.pop_back();
        }
        if(close < open){
            ans.push_back(')');
            solve(ans , result , open , close+1,n);
            ans.pop_back();
        }
    }   
    vector<string> generateParenthesis(int n) {
        string ans = "";
        vector <string> result;
        solve(ans , result , 0 , 0 , n);
        
        return result;
    }
    
};