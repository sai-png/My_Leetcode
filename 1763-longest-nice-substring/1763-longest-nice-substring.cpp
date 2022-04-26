class Solution {
	
public:
    string longestNiceSubstring(string s) {
        std::string result = "";
        int len = s.length();
		int sub = 1;
		std::queue<std::pair<int,int> > bfsQueue;
        
		bfsQueue.push({0,len});
		
		while(!bfsQueue.empty()){
			auto p = bfsQueue.front();
			bfsQueue.pop();
			int l = p.first;
			int r = p.second;
			int bitOne = 0;
			int bitTwo = 0;
			for(int i = l;i<r;++i){
				if(s[i]-'0' > 48) bitOne = bitOne | (1<<(s[i]-'a'));
				else bitTwo = bitTwo | (1<<(s[i]-'A'));
			}
			if((bitOne ^ bitTwo) == 0){
                result = s.substr(l,r-l);
                break;
            }
			int it = 0;
			while(it <= sub && sub < len){
				bfsQueue.push({it,(len+it - sub)});
				++it;
			}
			++sub;
		}
		return result;
    }
};