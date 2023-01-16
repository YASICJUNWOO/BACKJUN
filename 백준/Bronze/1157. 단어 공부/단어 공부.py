import sys

cnt = [0 for x in range(28)]

str = sys.stdin.readline().strip()

for i in range(len(str)):
    check = ord(str[i])
    if check>40 and check<91:
        check -= 65
    else:
        check -= 97

    cnt[check] += 1

max = max(cnt)
if cnt.count(max) != 1:
    print('?')
else :
    print(chr(cnt.index(max)+65))