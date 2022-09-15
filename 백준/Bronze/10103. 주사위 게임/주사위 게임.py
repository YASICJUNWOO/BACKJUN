test = input()

chang_score = 100
sang_score = 100

for i in range(int(test)):
    chang, sang = input().split()
    chang = int(chang)
    sang = int(sang)
    if chang > sang:
        sang_score-=chang
    elif sang > chang:
        chang_score-=sang

print("%d\n%d"%(chang_score,sang_score))