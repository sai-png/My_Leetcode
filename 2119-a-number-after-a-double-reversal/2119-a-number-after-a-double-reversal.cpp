class Solution {
public:
bool isSameAfterReversals(int num) {
if(num==0) return true;
string s=to_string(num);
string r=s;
reverse(r.begin(),r.end());
int i=0;
while(i<r.length() && r[i]=='0') i++;
r=r.substr(i);
reverse(r.begin(),r.end());
i=0;
while(i<r.length() && r[i]=='0') i++;
r=r.substr(i);
if(r==s) return true;
return false;

}
};