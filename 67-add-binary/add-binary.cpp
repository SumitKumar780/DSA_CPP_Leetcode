class Solution {
public:
    string addBinary(string a, string b) {
        
        int i= a.length()-1;
        int j= b.length()-1;
        int carry= 0;

        string result= "";

        while(i>=0||j>=0|| carry){
            int x,y;

            if(i>=0){
                x= a[i]-'0';
            }

            else{
                x= 0;
            }

            if(j>=0){
                y= b[j]-'0';
            }

            else{
                y= 0;
            }

            int sum= x+y+carry;

            if(sum%2==0){
                result+= "0";
            }

            else{
                result+= "1";
            }

            if(sum>=2){
                carry= 1;
            }

            else{
                carry= 0;
            }

            i--;
            j--;
        }

        reverse(result.begin(),result.end());

        return result;
    }
};