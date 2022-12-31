import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

cal = []

for x in range(n):
    n  = int(sys.stdin.readline())
    if not n:
        del cal[-1]
    else:
        cal.append(n)

print(sum(cal))