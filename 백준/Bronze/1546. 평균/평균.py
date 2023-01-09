import sys

n = int(sys.stdin.readline())

scores = list(map(int,sys.stdin.readline().split()))
max = max(scores)

check =[]

for score in scores:
    check.append(score/max*100)

print(sum(check)/n)