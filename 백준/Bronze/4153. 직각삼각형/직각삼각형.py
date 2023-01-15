import sys

g = list(map(int,sys.stdin.readline().split()))

while g[0] != 0:
    g.sort()
    if g[2]**2 == (g[0]**2+g[1]**2):
        print('right')
    else:
        print('wrong')
    g = list(map(int,sys.stdin.readline().split()))