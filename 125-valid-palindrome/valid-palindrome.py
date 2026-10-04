class Solution:
    def isPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1
        while left < right:
            #skip all the non alphanumericavlues from the left 
            if not s[left].isalnum():
                left += 1
                continue 

            #from the right
            if not s[right].isalnum():
                right -= 1
                continue

            if s[left].lower() != s[right].lower():
                return False

            
            left += 1
            right -= 1
        return True