class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int n= nums.size();

        int maxi= INT_MIN;
        for(int i=0;i<n;i++){
            maxi= max(maxi,nums[i]);
        }

        int c= 0;
        for(int i=0;i<n;i++){
            while(nums[i]!=maxi){
                nums[i]++;
                c++;
            }
        }

        return c;
        

        // return count;
    }
};