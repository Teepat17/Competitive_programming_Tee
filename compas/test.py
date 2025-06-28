def isSevenUp(n):
    return n % 7 == 0 or '7' in str(abs(n))

def nextSevenUp(n):
    while True:
        n += 1
        if isSevenUp(n):
            return n
        
s = input()
exec(s)
print()