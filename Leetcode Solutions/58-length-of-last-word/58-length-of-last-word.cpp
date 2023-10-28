class Solution {
public:
    int lengthOfLastWord(string s) {
        unsigned int c=0;
        for(int i= s.length()-1; i>=0; i--){
            if(s[i]!=' ') c++;
            if(s[i] == ' ' and c!=0) return c;
        }
        return c;
    }
};