class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n-1;
        
        if(isspace(s[i])){
            while(isspace(s[i])) {i--;}
        }
        
        
        int count =0;
        while(i>=0){
            if(!isspace(s[i])) {count++;
            i--;}
            else{
            return count;}
        }
        
        return count;
    }
};