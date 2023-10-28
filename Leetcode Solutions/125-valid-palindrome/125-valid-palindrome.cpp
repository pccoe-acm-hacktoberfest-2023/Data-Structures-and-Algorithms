class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r)
        {
            if(!isalnum(s[l]))
                l++;
            else if(!isalnum(s[r]))
                r--;
            else if(toupper(s[l])!=toupper(s[r]))
                return false;
            else
            {
                l++;
                r--;
            }
        }
        return true;
    }
};