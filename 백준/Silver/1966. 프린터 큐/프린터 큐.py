import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

for x in range(n):
    doc, check = map(int,sys.stdin.readline().split())

    doc_list = list(map(int,sys.stdin.readline().split()))

    pq_list = doc_list.copy()
    pq_list.sort()
    pq_list.reverse()

    new_list=[]
    idx=0
    for ele in doc_list:
        new_list.append((ele,idx))
        idx+=1

    cnt=1
    while True:
        while pq_list[0] != new_list[0][0]:
            new_list.append(new_list[0])
            del new_list[0]
        if new_list[0][1] == check:
            print(cnt)
            break
        else:
            del pq_list[0]
            del new_list[0]
            cnt+=1



