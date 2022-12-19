h,m = input().split()
ho = int(h)
mi = int(m)

if mi<45:
    ho -= 1
    mi = mi+15
else:
    mi -= 45

if ho<0:
    ho += 24

print(f"{ho} {mi}")