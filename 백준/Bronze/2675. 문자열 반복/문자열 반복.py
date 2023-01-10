import sys


n = int(sys.stdin.readline())

for i in range(n):
    x, str = sys.stdin.readline().split()
    x = int(x)
    for a in str:
        for b in range(x):
            print(a,end='')
    print()
