class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        sp = tp = 0

        while sp < len(s) and tp < len(t):
            if s[sp] == t[tp]:
                sp+=1
            tp += 1

        return sp == len(s) #to check whether the sp and length of s is same or not as they are then supposed to reach 