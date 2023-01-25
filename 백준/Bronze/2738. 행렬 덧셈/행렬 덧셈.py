import sys

x,y= map(int,sys.stdin.readline().strip().split())

a = []
b = []

for i in range(x):
    temp = list(map(int,sys.stdin.readline().strip().split()))
    a.append(temp)

for i in range(x):
    temp = list(map(int,sys.stdin.readline().strip().split()))
    b.append(temp)

for i in range(x):
    for v in range(y):
        print(a[i][v] + b[i][v],end=' ')
    print()

