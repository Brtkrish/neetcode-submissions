class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashs[256]={0};
        int hasht[256]={0};
        if(s.length()!=t.length())
        {
            return false;
        }
        else
        {
            for(int i=0;i<s.length();i++)
            {
                hashs[(unsigned char)s[i]]++;
                hasht[(unsigned char)t[i]]++;
            }
            for(int i=0;i<256;i++)
            {
                if(hashs[i]!=hasht[i])
                {
                    return false;
                }
            }
            return true;
        }
        
    }
};
