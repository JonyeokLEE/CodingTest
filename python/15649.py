import sys

def dfs(index):
    if index==m+1:
        for i in range(1,m+1):
            print(arr[i],end=" ")
        print("")
        return

    for j in range(1,n+1):
        if not visited[j]:
            arr[index] = j
            visited[j] = True
            dfs(index+1)
            visited[j] = False




n,m=map(int,sys.stdin.readline().split())
arr = [0]*9
visited = [False]*9

dfs(1)