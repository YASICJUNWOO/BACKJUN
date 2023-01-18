import sys

cards, number = map(int,sys.stdin.readline().split())
li = list(map(int,sys.stdin.readline().strip().split()))

result = 0

for i1 in range(cards):
    for i2 in range(i1+1,cards):
        for i3 in range(i2+1,cards):
            if li[i1] + li[i2] + li[i3] <= number:
                result = max(result,li[i1] + li[i2] + li[i3])

print(result)