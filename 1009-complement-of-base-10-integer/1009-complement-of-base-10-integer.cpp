class Solution {
public:
    int bitwiseComplement(int n) {
         if(n==0)
    {
        return 1;
    }
      int value=n;
    int bits=0;
    while(value>0)
    {
        bits++;
        value=value>>1;
    }
    
    int max=pow(2,bits)-1;
    int ans=n^max;
 
    return ans;
        
    }
};