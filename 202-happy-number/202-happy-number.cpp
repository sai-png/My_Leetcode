class Solution {
public:
    int happy(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum+=r*r;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=happy(n);
        while(slow!=fast){
            slow=happy(slow);
            fast=happy(happy(fast));
        }
            return fast==1;
    }
};