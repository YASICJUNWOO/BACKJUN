import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

li =[]

for x in range(10):
    n = int(sys.stdin.readline())
    li.append(n%42)

li = list(set(li))

print(len(li))