class Solution {
public:
    
    int count_ones(int num){
        int count = 0;
        while(num){
            if(num%2){
                count++;
            }
            num = num >> 1;
        }
        return count;
    }
   
    vector<string> readBinaryWatch(int turnedOn) {
        vector<int> hr;
        vector<string> hr_str;
        vector<int> mins;
        vector<string> mins_str;
        
        for(int i = 0; i < 12; ++i){
            hr.push_back(count_ones(i));
            hr_str.push_back(to_string(i));
        }
        for(int i = 0; i < 60; ++i){
            mins.push_back(count_ones(i));
            string s = to_string(i);
            if(s.size()==1){
                s = "0" + s;
            }
            mins_str.push_back(s);
        }
        
        // print_arr(hr);
        // print_arr(mins);
        
        vector<string> ans;
        for(int i = 0; i < hr.size(); ++i){
            for(int j = 0; j < mins.size(); ++j){
                if(hr[i] + mins[j] == turnedOn){
                    ans.push_back(hr_str[i] + ":" + mins_str[j]);
                }
            }
        }
        return ans;
    }
};