import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

queue = []

for x in range(n):
    com = list(sys.stdin.readline().split())

    if com[0] == "push":
        queue.append(com[1])
    elif com[0] == "pop":
        if len(queue)==0:
            print(-1)
        else:
            print(queue[0])
            del queue[0]
    elif com[0] == "size":
        print(len(queue))
    elif com[0] == "empty":
        if len(queue)==0:
            print(1)
        else:
            print(0)
    elif com[0] == "front":
        if len(queue)==0:
            print(-1)
        else:
            print(queue[0])
    elif com[0] == "back":
        if len(queue)==0:
            print(-1)
        else:
            print(queue[-1])
