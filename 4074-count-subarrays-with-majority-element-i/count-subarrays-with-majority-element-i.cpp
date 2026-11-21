class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        
        int n= nums.size();

        int count;
        int len;
        int c= 0;
        for(int i=0;i<n;i++){
            // vector<int> a;
            count= 0;
            len= 0;
            for(int j=i;j<n;j++){
                if(nums[j]==target){
                    count++;
                }
                len++;

                if((2*count)>len){
                    c++;
                }
            }

            
        }

        return c;


    }
};