// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long start = 0;
        long end = n;
        long middle = (start + end) / 2;
        while(start<=end){
            middle = (start + end) / 2;
            if(isBadVersion(middle) && isBadVersion(middle - 1)){
                end = middle -1;
            }else if(isBadVersion(middle)){
                return middle;
            }
            else{
                start = middle + 1;
            }
        }
        return true;
    }
    
};