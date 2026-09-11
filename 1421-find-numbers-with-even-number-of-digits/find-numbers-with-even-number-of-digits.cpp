class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count= 0;
        for(int val:nums){
            int temp= val;
            int c= 0;

            while(temp>0){
                temp= temp/10;
                c++;
            }

            if(c%2==0){
                count++;
            }
        }

        return count;
    }
};