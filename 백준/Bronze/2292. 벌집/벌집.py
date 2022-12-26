import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

step = 1
max = 1

while n > max:
    max += step*6
    step += 1

print(step)
