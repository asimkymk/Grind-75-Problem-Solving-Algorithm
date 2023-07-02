/* Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> counter;
        int max_count = 1;
        int num = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(counter.find(nums[i]) != counter.end()){
                counter[nums[i]]++;
                if(counter[nums[i]] >= nums.size() / 2 && counter[nums[i]] > max_count){
                    max_count = counter[nums[i]];
                    num = nums[i];
                }
            }
            else{
                counter[nums[i]] = 1;
            }
        }
        return num;
        
    }
};