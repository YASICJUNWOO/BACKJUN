import sys

li = []
people = list(range(0,15))
li.append(people)

for i in range(15):
    templist = [0 for i in range(15)]
    for x in range(1,15):
        templist[x] = li[-1][x]+templist[x-1]
    li.append(templist)
    
test = int(sys.stdin.readline().strip())

for x in range(test):
    k = int(sys.stdin.readline().strip())
    n = int(sys.stdin.readline().strip())
    print(li[k][n])