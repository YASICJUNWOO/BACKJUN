import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

dequeue = []

for i in range(n):
    com = list(sys.stdin.readline().split())

    if com[0]=='push_front':
        dequeue.insert(0,com[1])
    elif com[0]=='push_back':
        dequeue.append(com[1])
    elif com[0]=='pop_front':
        if len(dequeue) == 0:
            print(-1)
        else:
            print(dequeue[0])
            del dequeue[0]
    elif com[0]=='pop_back':
        if len(dequeue) == 0:
            print(-1)
        else:
            print(dequeue[-1])
            del dequeue[-1]
    elif com[0]=='size':
        print(len(dequeue))
    elif com[0]=='empty':
        if len(dequeue) == 0:
            print(1)
        else:
            print(0)
    elif com[0]=='front':
        if len(dequeue) == 0:
            print(-1)
        else:
            print(dequeue[0])
    elif com[0]=='back':
        if len(dequeue) == 0:
            print(-1)
        else:
            print(dequeue[-1])
