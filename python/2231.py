n = int(input())

for now in range(1, n+1):
    i = now + sum(map(int, str(now)))

    if i == n:
        print(now)
        break
    if now==n:
        print(0)
        break
