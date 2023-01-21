import sys

test = int(sys.stdin.readline().strip())

li =[]
rank = [1 for x in range(test) ]

for i in range(test):
    x,y = map(int, sys.stdin.readline().strip().split())
    li.append((x,y))

for y in range(len(li)):
    kg,cm = li[y]
    for idx in range(y+1,len(li)):
        if kg>li[idx][0] and cm>li[idx][1]:
            rank[idx] = rank[idx]+1
        elif kg<li[idx][0] and cm<li[idx][1]:
            rank[y] = rank[y]+1

for x in rank:
    print(x,end=' ')
