/* Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        for(int i = 0;i<ransomNote.size();i++){
            int pozisyon = magazine.find(ransomNote[i]);
            if (pozisyon != string::npos) {
                magazine.erase(pozisyon,1);
            } else {
                return false;
            }

            
        }
        return true;
    }
};