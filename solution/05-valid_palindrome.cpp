class Solution {
public:
    bool isPalindrome(string s) {
        
        bool changed = false;
        
        string temp = "";
        for(int i = 0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                temp += s[i];
            }

        }
        s = temp;
        int i =0;
        int j = s.size() - 1;
        if(s.size() == 1 || s.size() == 0) return true;
        for(i = 0;i < j;i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                
                if((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9')){
                    
                    if(s[i] != s[j]) return false;
                    else {
                        j--;
                        changed = true;
                    }
                }
                else {
                    j--;
                    i--;
                }
            }
        }
        
        return changed;
    }
};