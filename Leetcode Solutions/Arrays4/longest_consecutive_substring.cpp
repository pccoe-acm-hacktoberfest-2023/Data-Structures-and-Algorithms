class Solution {
public:
    int lengthOfLongestSubstring(string s) {
                int i=0;
                int j=0;
                int n=s.size();
                int mx=INT_MIN;

                unordered_map<int,int>mp;
                while(j<n){
                    mp[s[j]]++;
                    if(mp.size()==j-i+1){
                        mx=max(mx,j-i+1);
                    }
                    else if(mp.size()<j-i+1){
                        mp[s[i]]--;
                        if(mp[s[i]]==0){
                            mp.erase(s[i]);
                        }
                        i++;
                    }
                    j++;

                }
                if(n==0)return 0;
                return mx;
    }
};