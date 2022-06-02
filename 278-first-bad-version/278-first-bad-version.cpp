class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,end=n;
        while (start<=end) {
            int mid=start+(end-start)/2;
            if (isBadVersion(mid)) {
                if (mid==1||isBadVersion(mid-1)==false) return mid;
                else end=mid-1;
            }
            else start=mid+1;
        }
        return -1;
    }
};