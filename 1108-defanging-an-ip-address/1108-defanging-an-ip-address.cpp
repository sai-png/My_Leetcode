class Solution {
public:
    string defangIPaddr(string address) 
    {
        for(int i=0,j=0;j<3;i++){
            if(address[i]=='.'){
                address.insert(address.begin()+(i),'[');
                address.insert(address.begin()+(i+2),']');
                i++;
                j++;
            }
        }
        return address;
    }
};
