# Last updated: 7/6/2026, 6:50:28 PM
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        prev=[1]
        res=[prev]

        for i in range(2,numRows+1):
            curr=[1]*i
            for j in range(1,i-1):
                curr[j]=prev[j]+prev[j-1]
            res.append(curr)
            prev=curr
        return res