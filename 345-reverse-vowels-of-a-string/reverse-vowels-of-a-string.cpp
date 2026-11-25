class Solution {
public:
    string reverseVowels(string s) {
        
        int n= s.length();

        int i=0 ;
        int j= n-1;

        while(i<j){
            char l= tolower(s[i]);
            char r= tolower(s[j]);

            if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'){
                if(r=='a' || r=='e' || r=='i'|| r=='o'||r=='u'){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }

                else{
                    j--;
                }
            }

            else{
                i++;
            }
        }

        return s;
    }
};