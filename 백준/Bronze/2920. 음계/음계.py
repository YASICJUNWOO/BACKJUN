import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

li = list(map(int,sys.stdin.readline().split()))

asd = [1,2,3,4,5,6,7,8]

if li == asd:
    print("ascending")
else:
    asd.reverse()
    if li ==asd:
        print("descending")
    else:
        print("mixed")