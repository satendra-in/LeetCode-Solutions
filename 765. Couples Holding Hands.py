class Solution:
    def minSwapsCouples(self, row: List[int]) -> int:
        graph  = {}
        A = [x//2 for x in row]
        visited = []
        graph.clear()
        
        for x in range(0, len(A), 2):
            if A[x] == A[x+1]:
                continue
            if not graph.get(A[x]):
                graph[A[x]] = [A[x+1]]
            else:
                graph[A[x]].append(A[x+1])
            if not graph.get(A[x+1]):
                graph[A[x+1]] = [A[x]]
            else:
                graph[A[x+1]].append(A[x])
        print(graph)
        def getCluster(node):
            if node in visited:
                return 0
            visited.append(node)
            s = 0
            for x in graph[node]:
                if x not in visited:
                    s += getCluster(x) + 1
            return s
    
            
       # print(graph)
        res = 0
        for x in graph.keys():
            
            if x not in visited:
                print(x)
                res += getCluster(x) 
    
        print(visited)   
        print(res)
        return res
    
    #minSwapsCouples([1,4,0,5,8,7,6,3,2,9])
   # minSwapsCouples([5,6,4,0,2,1,9,3,8,7,11,10]) #4
        
        
        