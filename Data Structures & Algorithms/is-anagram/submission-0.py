class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        a="".join(sorted(t))
        b="".join(sorted(s))
        return b==a