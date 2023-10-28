#include <map>
class Solution {
public:
    string reverseVowels(string s) {
        int l=0, h=s.size()-1;
        char x;
        bool x1, x2;
        while(l<h){
            x1=false;
            x2=false;
            if(s[l] == 'a' || s[l] == 'e' || s[l]== 'o'|| s[l]== 'i'|| s[l]== 'u' || s[l] == 'A' || s[l] == 'E' || s[l]== 'O'|| s[l]== 'I'|| s[l]== 'U'){
                x1 = true;
            }
            if(s[h]== 'a'|| s[h]== 'e'|| s[h]== 'i'|| s[h]== 'o'|| s[h]== 'u' || s[h]== 'A'|| s[h]== 'E'|| s[h]== 'I'|| s[h]== 'O'|| s[h]== 'U'){
                x2 = true;
            }
            if(x1 == false) l++;
            if(x2==false) h--;
            if(x1&&x2){
                x=s[l];
                s[l]=s[h];
                s[h]=x;
                l++;
                h--;
            }
        }
        return s;
    }
};