import sys

li =[]
li2 =[]

for x in range(9):
    g = int(sys.stdin.readline())
    li.append(g)
    li2.append(g)

li.sort()
print(li[-1])
print(li2.index(li[-1])+1)