class Solution:
    def isPalindrome(self, s: str) -> bool:
        s.replace(" ","")
        ans=""
        for c in s:
            if(c.isalnum()):
                ans+=c.lower()
        if(ans==ans[::-1]):
            return True
        else:
            return False
        