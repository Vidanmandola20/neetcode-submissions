class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int left =0,right = n-1;
        while(left<right){
            if(isalnum(s[left]) && isalnum(s[right])){
                if(s[left] == s[right]){
                    left++;
                    right--;
                }else{
                    return false;

                }
            }else{
                if(!isalnum(s[left])){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return true;
    }
};