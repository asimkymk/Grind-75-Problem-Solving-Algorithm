/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false */

class Solution {
public:
    bool isAnagram(string s, string t) {
        bool status = true;
        for(int i = 0;i<s.size();i++){
            int pozisyon = t.find(s[i]);
            if (pozisyon != string::npos) {
                t.erase(pozisyon,1);
            } else {
                status = false;
                break;
            }

            
        }
        if(!status) return false;
        for(int i = 0;i<t.size();i++){
            int pozisyon = s.find(t[i]);
            if (pozisyon != string::npos) {
                s.erase(pozisyon,1);
            } else {
                status = false;
                break;
            }
        }
        return status;
    }
};