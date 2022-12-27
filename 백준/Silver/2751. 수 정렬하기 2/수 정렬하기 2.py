import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

nums = []

for x in range(n):
    input = int(sys.stdin.readline())
    nums.append(input)

nums.sort()
for n in nums:
    print(n)