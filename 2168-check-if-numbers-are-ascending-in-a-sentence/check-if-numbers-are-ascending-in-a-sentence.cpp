class Solution {
public:
    bool areNumbersAscending(string s) {
        
        int n= s.length();

        int prev= -1;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){

                int num= 0;

                while(i<n && isdigit(s[i])){
                    num= num*10+(s[i]-'0');
                    i++;
                }

                if(prev>=num){
                    return false;
                }

                prev= num;
            }
        }



        return true;
    }
};