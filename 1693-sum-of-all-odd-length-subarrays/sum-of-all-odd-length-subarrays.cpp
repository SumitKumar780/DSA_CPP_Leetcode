class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        
        int n= nums.size();

        int total= 0;
        for(int i=0;i<n;i++){

            int sum= 0;
            for(int j=i;j<n;j++){
                
                sum= sum+nums[j];
                int len= j-i+1;
                if(len%2!=0){
                    total+=sum;
                }
            }
        }

        return total;
    }
};