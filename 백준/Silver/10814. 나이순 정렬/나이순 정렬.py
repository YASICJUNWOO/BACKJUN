import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

people = []

for x in range(n):
    age, name = sys.stdin.readline().split()
    people.append((int(age),name))

people.sort(key = lambda x : x[0])

for age, name in people:
    print(age,name)