import sys

x, y, w, h = map(int,sys.stdin.readline().strip().split())

wid = w-x
hei = h-y

print(min(wid,hei,x,y))