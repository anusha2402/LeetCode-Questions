class Solution:
    def decode(self, arr: List[int], first: int) -> List[int]:
        res = [first]
        for a in arr:
            res.append(res[-1] ^ a)
        return res