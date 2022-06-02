class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        set<int> st;
        for(int i=0;i<n;i++){
            if(digits[i]==0){
                continue;
            }
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i!=j and j!=k and k!=i){
                        int num = digits[i]*100+digits[j]*10+digits[k];
                        if(num%2==0){
                            st.insert(num);
                        }
                    }
                }
            }
        }
        vector<int> ans;
        for(auto it:st){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};