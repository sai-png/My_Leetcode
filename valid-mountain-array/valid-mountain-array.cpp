class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int low=0,peak=0,plain=0;
        if(arr.size()<3 ) return false;
        for(int i=1;i<arr.size()-1;i++)
        {
            if( arr[i]==arr[i-1]) return false;
            if(arr[i-1]>arr[i] and arr[i+1]>arr[i] ){
                low++;
            }
            if(arr[i-1]<arr[i] and arr[i+1]<arr[i] ){
                peak++;
            }
             if(arr[i-1]==arr[i] and arr[i+1]==arr[i] ){
                plain++;
            }
        }
       if(low==0 and peak==1 and plain==0)
           return true;
        return false;
    }
};