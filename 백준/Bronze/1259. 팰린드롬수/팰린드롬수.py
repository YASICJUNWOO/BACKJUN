import sys

g = sys.stdin.readline().strip()

while not g == '0':
    strlist = list(g)
    length = len(strlist)
    if length % 2 == 0:
        length =int(length/2)
        first = strlist[:length]
        second = strlist[length:]
    else:
        length = int((len(strlist)-1)/2)
        first = strlist[:length]
        second = strlist[length+1:]

    second.reverse()
    if first == second:
        print('yes')
    else:
        print('no')
    g = sys.stdin.readline().strip()

