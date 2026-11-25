class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int n= s.length();

        int i= 0;
        int j= n-1;

        while(i<j){
            char l= s[i];
            char r= s[j];

            if((isalpha(l) && isalpha(r))){
                swap(s[i],s[j]);
                i++;
                j--;
            }

            else if(!isalpha(l) && isalpha(r)){
                i++;
            }
            else{
                j--;
            }
            // i++;
            // j--;
        }

        return s;
           

        
    }
};