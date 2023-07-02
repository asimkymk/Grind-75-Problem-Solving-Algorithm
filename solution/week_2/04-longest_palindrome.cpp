/* Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
 */
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> dicts;
        int palindrome_size = 0;
        for(int i = 0;i<s.size();i++){
            char ch = s[i];
            if(dicts.find(ch) != dicts.end()){
                dicts[ch]++;
                if(dicts[ch] == 2){
                    dicts[ch] = 0;
                    palindrome_size++;
                }
            }
            else{
                dicts[ch] = 1;
            }
        }
        map<char, int>::iterator it;
        palindrome_size *= 2;
        for (it = dicts.begin(); it != dicts.end(); it++){
            if(it->second == 1){
                palindrome_size++;
                break;
            }
        }
        return palindrome_size;
        
    }
};