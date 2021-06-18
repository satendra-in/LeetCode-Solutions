class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        followers = []
        follows = []
        for x in range(n+1):
            followers.append(0)
            follows.append(False)
        
        for pair in trust:
            a, b = pair[0], pair[1]
            followers[b] += 1
            follows[a] = True
            
        for x in range(1, n+1):
            if followers[x] == n-1 and not follows[x]:
                return x
            
        return -1
        