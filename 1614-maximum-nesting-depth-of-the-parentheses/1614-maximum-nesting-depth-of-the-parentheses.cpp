class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int depth = 0;
        int count = 0;
        for(int i = 0; i<n ;i++){
            if(s[i]=='('){
                count++;
                depth = max(count , depth);
            }
            if(s[i]==')'){
                count--;
            }

        }
        return depth;
    }
};