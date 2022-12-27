import sys

# map(int,sys.stdin.readline().split())
# data = list(map(int,sys.stdin.readline().split()))

n = int(sys.stdin.readline())

words = []


for x in range(n):
    input = sys.stdin.readline().strip()
    words.append(input)

words = sorted(list(set(words)))
words.sort(key=len)

for word in words:
    print(word)