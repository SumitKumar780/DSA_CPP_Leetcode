class Solution {
public:
    int countCommas(int n) {
        int count= 0;
        for(int i=1;i<=n;i++){
            string num= to_string(i);
            if(num.length()>=4){
                count++;
            }
            else{
                continue;
            }
        }

        return count;
    }
};