import sys

g = int(sys.stdin.readline())

for x in range(g):
    result = sys.stdin.readline()
    cnt = 0
    score = 0
    for check in result:
        if check == 'O':
            cnt += 1
            score += cnt
        else:
            cnt = 0

    print(score)