a = int(input())

for x in range(a):
    for i in range(a-x-1):
        print(' ',end='')
    for i in range(x+1):
        print('*',end='')
    print("")