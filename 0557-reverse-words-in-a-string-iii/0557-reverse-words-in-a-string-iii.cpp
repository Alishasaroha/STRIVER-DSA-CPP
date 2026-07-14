class Solution {
public:
void reverse(string &s , int l , int r){
    while(l<r){
    swap(s[l],s[r]);
    l++;
    r--;
    }
}
    string reverseWords(string s) {
        int start =0;
        int n = s.size();
        for(int i  = 0; i< n-1 ;i++){
            if(s[i]==' '){
                int end = i-1;
                reverse(s,start , end);
                start = i+1;
            }
        }
        reverse(s , start ,n-1);
        return s ;
    }
};