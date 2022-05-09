class Solution {
public:
    
    bool compute(vector<int> &s, vector<int> &nums, int k){
        
        for(int i=0;i<nums.size();i++){
            if(s.size() + (nums.size()-i) < k) break;
            while(s.size() && s.size() + (nums.size()-i) > k && s.back() < nums[i]) s.pop_back();
            if(s.size() < k) s.push_back(nums[i]);
        }
        
        return s.size() >= k;
    }
    
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        
        priority_queue<string, vector<string>, less<string>> q;
        string maxStr = "";

        for(int i=0;i<=k;i++){
            vector<int> s1;
            vector<int> s2; 
            
            int ptr1 = i;
            int ptr2 = k-i;
            
            bool ret1 = compute(s1, nums1, ptr1);
            bool ret2 = compute(s2, nums2, ptr2);
            
            string retStr = "";
            if(ret1 && ret2){
                int idx1 = 0;
                int idx2 = 0;
                while(idx1 < s1.size() && idx2 < s2.size()){               
                    if(s1 >= s2) retStr+=s1[idx1]+'0', s1.erase(s1.begin());
                    else retStr+=s2[idx2]+'0', s2.erase(s2.begin());
                }
                while(idx1 < s1.size()) retStr += s1[idx1++]+'0';
                while(idx2 < s2.size()) retStr += s2[idx2++]+'0';   
                
                if(maxStr < retStr) maxStr = retStr;
                // q.push(retStr);
            }
        }
        
        vector<int> vec;
        for(int i=0;i<maxStr.size();i++){
            vec.push_back(maxStr[i]-'0');
        }
        
        return vec;
    }
};