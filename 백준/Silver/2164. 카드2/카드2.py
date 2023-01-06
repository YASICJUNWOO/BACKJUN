import sys
from collections import deque

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

q = deque()

for i in range(1,n+1):
    q.append(i)

while not len(q) == 1 :
    q.popleft()
    q.append(q.popleft())

print(q.popleft())