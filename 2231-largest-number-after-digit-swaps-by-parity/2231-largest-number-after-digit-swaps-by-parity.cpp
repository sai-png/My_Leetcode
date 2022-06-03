class Solution {
public:
    int largestInteger(int num) {
        
        vector<int>a;
        
        while(num>0)
        {
            a.push_back(num%10);
            num/=10;
        }
        if(a.size()==1)
        {
            return a[0];
        }
        reverse(a.begin(),a.end());
        
        int i=0,j=a.size()-1;
        while(i<=a.size()-2)
        {
            j=i+1;
            while(j<a.size())
            {
                if(a[i]%2==0)
                {
                    if(a[j]%2==0 && a[j]>a[i])
                    {
                        swap(a[i],a[j]);
                        j++;
                    }
                    else
                        j++;
                }
                else if(a[i]%2!=0)
                {
                    if(a[j]%2!=0 &&a[j]>a[i])
                    {
                        swap(a[i],a[j]);
                        j++;
                    }
                    else
                        j++;
                }
                
            }
            i++;
            
            
            
        }
        int n=a.size()-1,res=0;
        for(int i=0;i<a.size();i++)
        {
            res+=a[i]*pow(10,n);
            n--;
        }
        return res;
        
        
    }
};