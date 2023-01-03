import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

a,b = map(int,sys.stdin.readline().split())

people = list(range(1,a+1))

idx = 0

result = []

while not len(people)==0:
    idx += (b-1)
    if idx>=len(people):
        idx %= len(people)
    result.append(people[idx])
    del people[idx]


print('<',end='')
for x in result:
    print(x,end='')
    if x != result[-1]:
        print(',',end=' ')
print('>',end='')
