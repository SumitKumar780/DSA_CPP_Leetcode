class Solution {
public:
    string finalString(string s) {
        
        int n= s.length();

        string z= "";
        for(char ch:s){
            if(ch=='i'){
                reverse(z.begin(),z.end());
                
            }
            if(ch!='i'){
                z+= ch;
            }
        }

        return z;
    }
};