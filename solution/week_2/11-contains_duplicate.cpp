/* Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> nums_dict;
        for(int i=0;i<nums.size();i++){
            if(nums_dict.find(nums[i]) != nums_dict.end()){
                return true;
            }
            else{
                nums_dict[nums[i]]= 1;
            }
        }
        return false;
    }
};