class Solution {
public:
string minWindow(string s, string t) {
unordered_map<char,int> freq_t;
unordered_map<char,int> freq_s;
for(int e=0;e<t.size();e++)
{
freq_t[t[e]]++;
}
int ub=0;
int lb=0;
int res_lb=0;
int res_ub=0;
int min_len=INT_MAX;
int match_count=0;
while(ub<s.size())
{
//aquiring characters
while(ub<s.size())
{
char current=s[ub];
if(freq_t.find(current)!=freq_t.end())
{
freq_s[current]++;
if(freq_t[current]>=freq_s[current]) match_count++;
}
if(match_count==t.size()) break;
ub++;
}
if(ub==s.size()) break;

        //releasing characters
        while(lb<=ub && match_count==t.size())
        {
            int dis=ub-lb+1;
            if(min_len>dis)
            {
                min_len=dis;
                res_lb=lb;
                res_ub=ub;
            }
            char current=s[lb];
            if(freq_s.find(current)!=freq_s.end())
            {
                freq_s[current]--;
                if(freq_s[current]<freq_t[current]) match_count--;
            }
            lb++;
        }
        ub++;
    }
    if(min_len==INT_MAX) return "";
    string result="";
    while(res_lb<=res_ub)
    {
        result+=s[res_lb];
        res_lb++;
    }
    return result;
}
};