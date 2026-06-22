class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int l=0,longest=0;
        for(int r=0;r<s.size();r++)
        {
            mp[s[r]]++;
            while(mp[s[r]]>1)
            {   
               mp[s[l]]--;
               l++;
            }
            longest=max(longest,r-l+1);
        }
        return longest;
    }
};
