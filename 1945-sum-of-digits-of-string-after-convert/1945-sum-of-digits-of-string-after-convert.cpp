class Solution {
public:
    int getLucky(string s, int k) {
        long long int res=0,num=0; 
        for(int i=0;i<s.size();i++){
            int ascii = s[i]-'a'+1;
            while(ascii>0){                  //Directly calculating the 1st transformation to reduce the size of variable.
                int digit = ascii%10;
                num+=digit;
                ascii/=10;
            }
        }
        k--;                                 //Reduce K value by 1 because already 1st transformation found.
        while(k>0){
            res=0;
            while(num>0){
                int digit = num%10;
                res+=digit;
                num/=10;
            }
            num=res;
            k--;
        }
        return num;
    }
};