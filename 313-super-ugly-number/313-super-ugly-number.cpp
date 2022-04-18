class Solution {
public:
 int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int>nums(n);
        vector<int>indices(primes.size()); // index of the prime number inside nums array
        nums[0] = 1;
		// first item is value of ugly number, second item is identity of the prime
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        for(int i=0; i<primes.size(); ++i)  pq.emplace(primes[i], i);
        for(int i=1; i<n; ){
            auto [val, id] = pq.top();
            pq.pop();
            if(val != nums[i-1])    nums[i++] = val; // avoid duplicate
            if(INT_MAX/primes[id]>nums[indices[id]+1]) // prevent overflow
                pq.emplace(nums[++indices[id]] * primes[id], id);
        }
        return nums.back();
    }
};