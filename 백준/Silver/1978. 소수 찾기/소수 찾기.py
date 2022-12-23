import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

check_num = list(map(int,sys.stdin.readline().split()))

sosu = 0

for check in check_num:
    if check == 1:
        pass
    else:
        is_sosu = True
        for x in range(2,check):
            if check % x == 0:
                is_sosu = False
                break
        if is_sosu:
            sosu+=1

print(sosu)