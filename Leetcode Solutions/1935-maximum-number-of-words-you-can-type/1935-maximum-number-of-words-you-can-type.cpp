class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool isbroken=false;
        int ans=0;
        map<char, int> m;
        for(char x : brokenLetters) m[x]++;
        for(int i=0; i<text.size(); i++){
            if(m[text[i]]>0){
                isbroken=true;
            }
            if(text[i] == ' ' || i== text.size()-1){
                if(!isbroken){
                    ans++;
                }
                isbroken=false;
            }
        }
        return ans;
    }
};