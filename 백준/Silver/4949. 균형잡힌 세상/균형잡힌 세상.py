import sys

str = sys.stdin.readline().rstrip('\n')
li =[]
while not str == '.':
    str = str.strip()
    result = ''
    st =[]
    for s in str:
        if s == '(' or s == '[':
            st.append(s)
        elif s == ')':
            if len(st) == 0:
                result = 'no'
                break
            elif st[-1] == '(':
                del st[-1]
            else:
                result = 'no'
        elif s == ']':
            if len(st) == 0 or st[-1] != '[':
                result = 'no'
                break
            elif st[-1] == '[':
                del st[-1]
            else:
                result = 'no'
    if result != 'no' and len(st) == 0:
        result = 'yes'
    elif len(st)!=0:
        result ='no'
    li.append(result)
    str = sys.stdin.readline().rstrip('\n')


for x in li:
    print(x)