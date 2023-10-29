class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char, int> m1, m2;
        for(char i: s){
            m1[i]++;
        }
        for(char i: t){
            m2[i]++;
        }
        for(char i: s){
            if(m1[i] != m2[i]) return false;
        } 
        return true;
    }
};