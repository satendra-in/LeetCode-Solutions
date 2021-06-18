class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        G = {}
        res = []
        def getAllPaths(src, dest):
            path = []
            if src == dest:
                return [[src]]
            for ver in G[src]:
                rem = getAllPaths(ver, dest)
                for x in rem:
                    x.insert(0, src)
                    path.append(x)
            return path
        
        for x in range(len(graph)):
            G[x] = graph[x]
            
        return getAllPaths(0, len(graph) - 1)