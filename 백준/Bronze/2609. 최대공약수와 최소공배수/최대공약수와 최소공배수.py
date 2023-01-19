import sys

a,b = map(int,sys.stdin.readline().strip().split())

def gcd(a,b):
    if b == 0:
        return a
    if b>a:
        temp = a
        a=b
        b=temp
    return gcd(b,a%b)

gcd = gcd(a,b)

print(gcd)
print(a*b//gcd)