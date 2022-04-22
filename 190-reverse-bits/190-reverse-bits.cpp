class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        uint32_t num =0;
        int bit = 31;
        
     for(int i=0; i<32; i++){
         
         int n_bit = (n & 1);  
          num = (num | (n_bit <<bit)) ;
          n>>=1;
          bit--;             
     }
       
        return num;
        
    }
};