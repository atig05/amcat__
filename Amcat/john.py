def fuck_you(target, startFuel, s):
    dp = [startFuel] + [0] * len(s)
    for i in range(len(s)):
        for t in range(i + 1)[::-1]:
            if dp[t] >= s[i][0]:
                dp[t + 1] = max(dp[t + 1], dp[t] + s[i][1])
    for t, d in enumerate(dp):
        if d >= target: return t
    return -1

n=int(input())
dist=list(map(int,input().split()))
m=int(input())
lit=list(map(int,input().split()))
target=int(input())
startfuel=int(input())
s=[]
for i in range(m):
    s.append([dist[i],lit[i]])

print(fuck_you(target,startfuel,s))