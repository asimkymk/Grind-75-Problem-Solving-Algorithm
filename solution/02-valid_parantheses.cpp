
/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/
#include <map>
#include <vector>
class Solution {
public:
    bool isValid(string s) {
        map<char,char> dicts;
        dicts['('] = ')';
        dicts['['] = ']';
        dicts['{'] = '}';
        vector<char> items;

        for (int i = 0; i<s.size();i++){
            char ch = s[i];
            if(dicts.find(ch) != dicts.end()){
                items.push_back(ch);
            }
            else{
                if(items.size() == 0){
                    return false;
                }
                else if(dicts.find(items[items.size()-1])->second != ch){
                    return false;
                }
                else{
                    items.pop_back();
                }
            }
        }
        if(items.size() == 0) return true;
        return false;
    }
};