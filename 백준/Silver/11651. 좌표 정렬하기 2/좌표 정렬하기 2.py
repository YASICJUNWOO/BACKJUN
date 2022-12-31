import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

point = []

for x in range(n):
    x,y = map(int,sys.stdin.readline().split())
    point.append((x,y))

point.sort(key=lambda x : (x[1],x[0]))


for x,y in point:
    print(x, y)

