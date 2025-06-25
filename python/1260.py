import queue
import sys

n,m,v = map(int, sys.stdin.readline().split())

edge = [[False for col in range(n+1)] for row in range(n+1)]
dfs_visited = [False for _ in range(n+1)]
bfs_visited = [False for _ in range(n+1)]

stk = []
que = queue.Queue()

stk.append(v)
que.put(v)

for _ in range(m):
    a, b = map(int, sys.stdin.readline().split())
    edge[a][b] = True
    edge[b][a] = True

while stk:
    now = stk.pop()
    if dfs_visited[now]: continue
    dfs_visited[now] = True
    print(now,end=" ")
    for i in range(n,0,-1):
        if edge[now][i]: stk.append(i)
print(" ")
while not que.empty():
    now = que.get()
    if bfs_visited[now]: continue
    bfs_visited[now] = True
    print(now,end=" ")
    for i in range(1, n+1):
        if edge[now][i]: que.put(i)

