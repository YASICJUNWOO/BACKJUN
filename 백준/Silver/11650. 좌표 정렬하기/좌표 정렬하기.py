import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

points = []

for x in range(n):
    x,y = map(int, sys.stdin.readline().split())
    points.append((x,y))

points.sort(key=lambda x : (x[0], x[1]))

for x,y in points:
    print(x,y)