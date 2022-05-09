class Solution {
public:
    int maximumSwap(int num) {
        
        int temp = num,i=0;
        pair<int,int> leftElement={0,-1}, rightElement,maxFromRight = {0,-1};
        while(temp){
            int curr = temp%10;
            if(curr<maxFromRight.first){
                leftElement = {curr,i};
                rightElement = maxFromRight;
            }
            if(curr>maxFromRight.first){
                maxFromRight = {curr,i};
            }
            temp/=10;
            i++;
        }
        if(leftElement.second==-1)return num;
        temp = num;
        i = 0;
        while(temp){
            int curr = temp%10;
            if(i==rightElement.second){
                num = num-curr * pow(10,i)+leftElement.first*pow(10,i);
            }
            if(i==leftElement.second){
                num = num-curr * pow(10,i)+rightElement.first*pow(10,i);
            }
            temp/=10;
            i++;
        }
        return num;
    }
};